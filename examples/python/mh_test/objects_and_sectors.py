#!/usr/bin/env python3

#####################################################################
# This script presents how to access the information
# about the actors and objects present in the current scenario
# and map sectors (geometry).
#
# This information is not available if "+viz_nocheat" flag is enabled.
#####################################################################

from random import choice
import vizdoom as vzd
from argparse import ArgumentParser
import matplotlib.pyplot as plt
import os
from actioner.deathmatch_pos import *
import matplotlib.image as mpimg
import json
# DEFAULT_CONFIG = os.path.join(vzd.scenarios_path, "my_way_home.cfg")
DEFAULT_CONFIG = os.path.join('../../../scenarios', "deathmatch.cfg")

if __name__ =="__main__":
    parser = ArgumentParser("ViZDoom example showing how to use information about objects and map.")
    parser.add_argument(dest="config",
                        default=DEFAULT_CONFIG,
                        nargs="?",
                        help="Path to the configuration file of the scenario."
                             " Please see "
                             "../../scenarios/*cfg for more scenarios.")

    args = parser.parse_args()

    game = vzd.DoomGame()

    # Use other config file if you wish.
    game.load_config(args.config)
    game.set_render_hud(False)
    game.set_screen_resolution(vzd.ScreenResolution.RES_640X480)

    # Enables information about all objects present in the current episode/level.
    game.set_objects_info_enabled(True)

    # Enables information about all sectors (map layout).
    game.set_sectors_info_enabled(True)

    game.clear_available_game_variables()
    game.add_available_game_variable(vzd.GameVariable.POSITION_X)
    game.add_available_game_variable(vzd.GameVariable.POSITION_Y)
    game.add_available_game_variable(vzd.GameVariable.POSITION_Z)

    game.init()

    actions = [[True, False, False], [False, True, False], [False, False, True]]

    episodes = 10
    sleep_time = 1.0 / vzd.DEFAULT_TICRATE  # = 0.028
    # plt.axis([-300,1000,-300,1000])
    plt.ion()
    plt.show()
    img = mpimg.imread('deathmatch_map.png')
    plt.imshow(img)
    
    for i in range(episodes):
        print("Episode #" + str(i + 1))
    
        # Not needed for the first episode but the loop is nicer.
        game.new_episode()
        while not game.is_episode_finished():
            
    
            # Gets the state
            state = game.get_state()
            game.make_action(choice(actions))
            sectors = []
            for s in state.sectors:
                lines = []
                for l in s.lines:
                    if l.is_blocking:
                        lines.append([l.x1, l.x2, l.y1, l.y2])
                sectors.append(lines)

            print(sectors)
            log_data = json.dumps(sectors)
            with open("deathmatch_map_sector.json", "w") as f:
                f.write(log_data)
    
            # Print information about objects present in the episode.
            for o in state.objects:

                # Other available fields:
                #print("Object rotation angle", o.angle, "pitch:", o.pitch, "roll:", o.roll)
                #print("Object velocity x:", o.velocity_x, "y:", o.velocity_y, "z:", o.velocity_z)

                # Plot object on map
                if o.name == "DoomPlayer":
                    plt.plot(o.position_x, o.position_y, color='green', marker='o')
                else:
                    plt.plot(o.position_x, o.position_y, color='red', marker='o')
    
            # Print information about sectors.
            # for s in state.sectors:
                # # Plot sector on map
                # for l in s.lines:
                #     if l.is_blocking:
                #         plt.plot([l.x1, l.x2], [l.y1, l.y2], color='black', linewidth=2)
            
            pos_list = []
            sections = [
                Section.TOP,
                Section.BOTTOM,
                Section.LEFT,
                Section.RIGHT,
                Section.CENTER1,
                Section.CENTER2,
                Section.TOP_PESSAGE,
                Section.BOTTOM_PESSAGE,
                Section.LEFT_PESSAGE,
                Section.RIGHT_PESSAGE
                ]

            # for section in sections:
            #     for x in range(3):
            #         for y in [3, 4, 5]:
            #             pos_list.append(MapPos.get_pos(section, x, y))
                        
            # for pos in pos_list:
            #     plt.plot(pos[0], pos[1], color='blue', marker='o')
            # plt.plot(1060, 210, color='blue', marker='o')
            # Show map

            
            plt.draw()
            plt.pause(0.0001)

            
            
        print("Episode finished!")

    # It will be done automatically anyway but sometimes you need to do it in the middle of the program...
    game.close()