from enum import IntEnum
from abc import abstractmethod
from typing import overload
from vizdoom_player_action import * 
from draw_map import *
from vizdoom_object_data import *

class PlayerAction(IntEnum):
    Atack = 0
    Run = 1
    b = 2
    MoveRight = 3
    MoveLeft = 4
    MoveBack = 5
    MoveFront = 6
    TurnRight = 7
    TurnLeft = 8
    weapone1 = 9
    weapone2 = 10
    weapone3 = 11
    weapone4 = 12
    weapone5 = 13
    weapone6 = 14
    f = 15
    e = 16
    rotateY = 17
    rotateX = 18

def make_action(action_dict):
    action = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0]
    for key in action_dict.keys():
        action[key] = action_dict[key]
    return action




class DeathmatchAction:
    def set_angle(stateData, angle):
        action = make_action({
            PlayerAction.rotateX: stateData.player.object.angle-angle
        })
        return (action, True)

    def MoveTo(stateData, pos):
        make_action({
            # PlayerAction.Atack:True,
            PlayerAction.MoveLeft: (map[y+1,x] < map[y,x]),
            PlayerAction.MoveRight: (map[y-1,x] < map[y,x]),
            PlayerAction.MoveBack: (map[y,x-1] < map[y,x]),
            PlayerAction.MoveFront: (map[y,x+1] < map[y,x]),
        })
        pass



    # def get_map(section)
    #     if section == "Top":
    #         make_direction_map(access, ((500+1200)//8, (500+500)//8))
    #     else

class AbstractAction:
    @ abstractmethod
    def do(self): # 한 스텝 수행 후 종료 여부 반환
        pass

    def do_all(self): # 액션의 전체 과정을 수행
        while True:
            if self.do():
                break

class RotateTo(AbstractAction):
    def __init__(self, game, angle):
        self.game = game
        self.angle = angle

    def do(self):
        self.game.make_action(make_action({
                PlayerAction.rotateX: StateData(self.game.get_state()).player.object.angle-self.angle
        }))
        return True


class MoveTo(AbstractAction):
    
    def __init__(self, game, target_pos): 
        self.game = game
        access_map = AccessMap(game.get_state())
        self.map = DirectionMap(access_map, target_pos)



    def do(self):
        while True:
            stateData = StateData(self.game.get_state())
            x = int(stateData.player.pos[0])
            y = int(stateData.player.pos[1])

            if self.map[(y,x)] < 10:
                return True
            else:
                RotateTo(self.game, 0).do_all() # 각도를 0으로            
                right = self.map[(y-1,x)] < self.map[(y,x)]
                left = self.map[(y+1,x)] < self.map[(y,x)] and not right
                front = (self.map[(y,x+1)] < self.map[(y,x)])
                back = (self.map[(y,x-1)] < self.map[(y,x)]) and not front

                self.game.make_action(make_action({
                    PlayerAction.MoveFront: front,
                    PlayerAction.MoveBack: back,
                    PlayerAction.MoveRight: right,
                    PlayerAction.MoveLeft: left
                }))
                return False

