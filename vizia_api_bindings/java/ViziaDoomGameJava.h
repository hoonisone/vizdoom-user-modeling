/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class ViziaDoomGameJava */

#ifndef _Included_ViziaDoomGameJava
#define _Included_ViziaDoomGameJava
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     ViziaDoomGameJava
 * Method:    DoomTics2Ms
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_ViziaDoomGameJava_DoomTics2Ms
  (JNIEnv *, jobject, jint);

/*
 * Class:     ViziaDoomGameJava
 * Method:    Ms2DoomTics
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_ViziaDoomGameJava_Ms2DoomTics
  (JNIEnv *, jobject, jint);

/*
 * Class:     ViziaDoomGameJava
 * Method:    DoomFixedToFloat
 * Signature: (I)F
 */
JNIEXPORT jfloat JNICALL Java_ViziaDoomGameJava_DoomFixedToFloat
  (JNIEnv *, jobject, jint);

/*
 * Class:     ViziaDoomGameJava
 * Method:    DoomGame
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_ViziaDoomGameJava_DoomGame
  (JNIEnv *, jobject);

/*
 * Class:     ViziaDoomGameJava
 * Method:    DoomGameDes
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_ViziaDoomGameJava_DoomGameDes
  (JNIEnv *, jobject);

/*
 * Class:     ViziaDoomGameJava
 * Method:    loadConfig
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_ViziaDoomGameJava_loadConfig
  (JNIEnv *, jobject, jstring);

/*
 * Class:     ViziaDoomGameJava
 * Method:    saveConfig
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_ViziaDoomGameJava_saveConfig
  (JNIEnv *, jobject, jstring);

/*
 * Class:     ViziaDoomGameJava
 * Method:    init
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_ViziaDoomGameJava_init
  (JNIEnv *, jobject);

/*
 * Class:     ViziaDoomGameJava
 * Method:    close
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_ViziaDoomGameJava_close
  (JNIEnv *, jobject);

/*
 * Class:     ViziaDoomGameJava
 * Method:    newEpisode
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_ViziaDoomGameJava_newEpisode
  (JNIEnv *, jobject);

/*
 * Class:     ViziaDoomGameJava
 * Method:    isRunning
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_ViziaDoomGameJava_isRunning
  (JNIEnv *, jobject);

/*
 * Class:     ViziaDoomGameJava
 * Method:    setAction
 * Signature: ([I)V
 */
JNIEXPORT void JNICALL Java_ViziaDoomGameJava_setAction
  (JNIEnv *, jobject, jintArray);

/*
 * Class:     ViziaDoomGameJava
 * Method:    advanceAction
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_ViziaDoomGameJava_advanceAction__
  (JNIEnv *, jobject);

/*
 * Class:     ViziaDoomGameJava
 * Method:    advanceAction
 * Signature: (ZZI)V
 */
JNIEXPORT void JNICALL Java_ViziaDoomGameJava_advanceAction__ZZI
  (JNIEnv *, jobject, jboolean, jboolean, jint);

/*
 * Class:     ViziaDoomGameJava
 * Method:    makeAction
 * Signature: ([I)F
 */
JNIEXPORT jfloat JNICALL Java_ViziaDoomGameJava_makeAction___3I
  (JNIEnv *, jobject, jintArray);

/*
 * Class:     ViziaDoomGameJava
 * Method:    makeAction
 * Signature: ([II)F
 */
JNIEXPORT jfloat JNICALL Java_ViziaDoomGameJava_makeAction___3II
  (JNIEnv *, jobject, jintArray, jint);

/*
 * Class:     ViziaDoomGameJava
 * Method:    getState
 * Signature: ()LState;
 */
JNIEXPORT jobject JNICALL Java_ViziaDoomGameJava_getState
  (JNIEnv *, jobject);

/*
 * Class:     ViziaDoomGameJava
 * Method:    getLastAction
 * Signature: ()[I
 */
JNIEXPORT jintArray JNICALL Java_ViziaDoomGameJava_getLastAction
  (JNIEnv *, jobject);

/*
 * Class:     ViziaDoomGameJava
 * Method:    isNewEpisode
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_ViziaDoomGameJava_isNewEpisode
  (JNIEnv *, jobject);

/*
 * Class:     ViziaDoomGameJava
 * Method:    isEpisodeFinished
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_ViziaDoomGameJava_isEpisodeFinished
  (JNIEnv *, jobject);

/*
 * Class:     ViziaDoomGameJava
 * Method:    addAvailableButton
 * Signature: (Lenums/Button;)V
 */
JNIEXPORT void JNICALL Java_ViziaDoomGameJava_addAvailableButton__Lenums_Button_2
  (JNIEnv *, jobject, jobject);

/*
 * Class:     ViziaDoomGameJava
 * Method:    addAvailableButton
 * Signature: (Lenums/Button;I)V
 */
JNIEXPORT void JNICALL Java_ViziaDoomGameJava_addAvailableButton__Lenums_Button_2I
  (JNIEnv *, jobject, jobject, jint);

/*
 * Class:     ViziaDoomGameJava
 * Method:    clearAvailableButtons
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_ViziaDoomGameJava_clearAvailableButtons
  (JNIEnv *, jobject);

/*
 * Class:     ViziaDoomGameJava
 * Method:    getAvailableButtonsSize
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_ViziaDoomGameJava_getAvailableButtonsSize
  (JNIEnv *, jobject);

/*
 * Class:     ViziaDoomGameJava
 * Method:    setButtonMaxValue
 * Signature: (Lenums/Button;I)V
 */
JNIEXPORT void JNICALL Java_ViziaDoomGameJava_setButtonMaxValue
  (JNIEnv *, jobject, jobject, jint);

/*
 * Class:     ViziaDoomGameJava
 * Method:    addStateAvailableVar
 * Signature: (Lenums/GameVar;)V
 */
JNIEXPORT void JNICALL Java_ViziaDoomGameJava_addStateAvailableVar
  (JNIEnv *, jobject, jobject);

/*
 * Class:     ViziaDoomGameJava
 * Method:    clearStateAvailableVars
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_ViziaDoomGameJava_clearStateAvailableVars
  (JNIEnv *, jobject);

/*
 * Class:     ViziaDoomGameJava
 * Method:    getStateAvailableVarsSize
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_ViziaDoomGameJava_getStateAvailableVarsSize
  (JNIEnv *, jobject);

/*
 * Class:     ViziaDoomGameJava
 * Method:    addCustomGameArg
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_ViziaDoomGameJava_addCustomGameArg
  (JNIEnv *, jobject, jstring);

/*
 * Class:     ViziaDoomGameJava
 * Method:    clearCustomGameArgs
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_ViziaDoomGameJava_clearCustomGameArgs
  (JNIEnv *, jobject);

/*
 * Class:     ViziaDoomGameJava
 * Method:    sendGameCommand
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_ViziaDoomGameJava_sendGameCommand
  (JNIEnv *, jobject, jstring);

/*
 * Class:     ViziaDoomGameJava
 * Method:    getGameScreen
 * Signature: ()[I
 */
JNIEXPORT jintArray JNICALL Java_ViziaDoomGameJava_getGameScreen
  (JNIEnv *, jobject);

/*
 * Class:     ViziaDoomGameJava
 * Method:    getGameMod
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_ViziaDoomGameJava_getGameMod
  (JNIEnv *, jobject);

/*
 * Class:     ViziaDoomGameJava
 * Method:    setGameMode
 * Signature: (Lenums/GameMode;)V
 */
JNIEXPORT void JNICALL Java_ViziaDoomGameJava_setGameMode
  (JNIEnv *, jobject, jobject);

/*
 * Class:     ViziaDoomGameJava
 * Method:    getGameVar
 * Signature: (Lenums/GameVar;)I
 */
JNIEXPORT jint JNICALL Java_ViziaDoomGameJava_getGameVar
  (JNIEnv *, jobject, jobject);

/*
 * Class:     ViziaDoomGameJava
 * Method:    getLivingReward
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_ViziaDoomGameJava_getLivingReward
  (JNIEnv *, jobject);

/*
 * Class:     ViziaDoomGameJava
 * Method:    setLivingReward
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_ViziaDoomGameJava_setLivingReward
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     ViziaDoomGameJava
 * Method:    getDeathPenalty
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_ViziaDoomGameJava_getDeathPenalty
  (JNIEnv *, jobject);

/*
 * Class:     ViziaDoomGameJava
 * Method:    setDeathPenalty
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_ViziaDoomGameJava_setDeathPenalty
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     ViziaDoomGameJava
 * Method:    getLastReward
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_ViziaDoomGameJava_getLastReward
  (JNIEnv *, jobject);

/*
 * Class:     ViziaDoomGameJava
 * Method:    getSummaryReward
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_ViziaDoomGameJava_getSummaryReward
  (JNIEnv *, jobject);

/*
 * Class:     ViziaDoomGameJava
 * Method:    setDoomGamePath
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_ViziaDoomGameJava_setDoomGamePath
  (JNIEnv *, jobject, jstring);

/*
 * Class:     ViziaDoomGameJava
 * Method:    setDoomIwadPath
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_ViziaDoomGameJava_setDoomIwadPath
  (JNIEnv *, jobject, jstring);

/*
 * Class:     ViziaDoomGameJava
 * Method:    setDoomFilePath
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_ViziaDoomGameJava_setDoomFilePath
  (JNIEnv *, jobject, jstring);

/*
 * Class:     ViziaDoomGameJava
 * Method:    setDoomMap
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_ViziaDoomGameJava_setDoomMap
  (JNIEnv *, jobject, jstring);

/*
 * Class:     ViziaDoomGameJava
 * Method:    setDoomSkill
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_ViziaDoomGameJava_setDoomSkill
  (JNIEnv *, jobject, jint);

/*
 * Class:     ViziaDoomGameJava
 * Method:    setDoomConfigPath
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_ViziaDoomGameJava_setDoomConfigPath
  (JNIEnv *, jobject, jstring);

/*
 * Class:     ViziaDoomGameJava
 * Method:    getSeed
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_ViziaDoomGameJava_getSeed
  (JNIEnv *, jobject);

/*
 * Class:     ViziaDoomGameJava
 * Method:    setSeed
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_ViziaDoomGameJava_setSeed
  (JNIEnv *, jobject, jint);

/*
 * Class:     ViziaDoomGameJava
 * Method:    setAutoNewEpisode
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_ViziaDoomGameJava_setAutoNewEpisode
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     ViziaDoomGameJava
 * Method:    setNewEpisodeOnTimeout
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_ViziaDoomGameJava_setNewEpisodeOnTimeout
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     ViziaDoomGameJava
 * Method:    setNewEpisodeOnPlayerDeath
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_ViziaDoomGameJava_setNewEpisodeOnPlayerDeath
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     ViziaDoomGameJava
 * Method:    setNewEpisodeOnMapEnd
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_ViziaDoomGameJava_setNewEpisodeOnMapEnd
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     ViziaDoomGameJava
 * Method:    getEpisodeStartTime
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_ViziaDoomGameJava_getEpisodeStartTime
  (JNIEnv *, jobject);

/*
 * Class:     ViziaDoomGameJava
 * Method:    setEpisodeStartTime
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_ViziaDoomGameJava_setEpisodeStartTime
  (JNIEnv *, jobject, jint);

/*
 * Class:     ViziaDoomGameJava
 * Method:    getEpisodeTimeout
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_ViziaDoomGameJava_getEpisodeTimeout
  (JNIEnv *, jobject);

/*
 * Class:     ViziaDoomGameJava
 * Method:    setEpisodeTimeout
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_ViziaDoomGameJava_setEpisodeTimeout
  (JNIEnv *, jobject, jint);

/*
 * Class:     ViziaDoomGameJava
 * Method:    setScreenResolution
 * Signature: (Lenums/ScreenResolution;)V
 */
JNIEXPORT void JNICALL Java_ViziaDoomGameJava_setScreenResolution
  (JNIEnv *, jobject, jobject);

/*
 * Class:     ViziaDoomGameJava
 * Method:    setScreenWidth
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_ViziaDoomGameJava_setScreenWidth
  (JNIEnv *, jobject, jint);

/*
 * Class:     ViziaDoomGameJava
 * Method:    setScreenHeight
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_ViziaDoomGameJava_setScreenHeight
  (JNIEnv *, jobject, jint);

/*
 * Class:     ViziaDoomGameJava
 * Method:    setScreenFormat
 * Signature: (Lenums/ScreenFormat;)V
 */
JNIEXPORT void JNICALL Java_ViziaDoomGameJava_setScreenFormat
  (JNIEnv *, jobject, jobject);

/*
 * Class:     ViziaDoomGameJava
 * Method:    setRenderHud
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_ViziaDoomGameJava_setRenderHud
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     ViziaDoomGameJava
 * Method:    setRenderWeapon
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_ViziaDoomGameJava_setRenderWeapon
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     ViziaDoomGameJava
 * Method:    setRenderCrosshair
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_ViziaDoomGameJava_setRenderCrosshair
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     ViziaDoomGameJava
 * Method:    setRenderDecals
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_ViziaDoomGameJava_setRenderDecals
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     ViziaDoomGameJava
 * Method:    setRenderParticles
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_ViziaDoomGameJava_setRenderParticles
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     ViziaDoomGameJava
 * Method:    setWindowVisible
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_ViziaDoomGameJava_setWindowVisible
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     ViziaDoomGameJava
 * Method:    setConsoleEnabled
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_ViziaDoomGameJava_setConsoleEnabled
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     ViziaDoomGameJava
 * Method:    getScreenWidth
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_ViziaDoomGameJava_getScreenWidth
  (JNIEnv *, jobject);

/*
 * Class:     ViziaDoomGameJava
 * Method:    getScreenHeight
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_ViziaDoomGameJava_getScreenHeight
  (JNIEnv *, jobject);

/*
 * Class:     ViziaDoomGameJava
 * Method:    getScreenChannels
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_ViziaDoomGameJava_getScreenChannels
  (JNIEnv *, jobject);

/*
 * Class:     ViziaDoomGameJava
 * Method:    getScreenPitch
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_ViziaDoomGameJava_getScreenPitch
  (JNIEnv *, jobject);

/*
 * Class:     ViziaDoomGameJava
 * Method:    getScreenSize
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_ViziaDoomGameJava_getScreenSize
  (JNIEnv *, jobject);

/*
 * Class:     ViziaDoomGameJava
 * Method:    getScreenForma
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_ViziaDoomGameJava_getScreenForma
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif