#pragma once
#include "keycodes.h"

#define ________________NUMBER_LEFT________________         ___1___    ___2___    ___3___    ___4___    ___5___
#define ________________NUMBER_RIGHT_______________         ___6___    ___7___    ___8___    ___9___    ___0___

#define _________________FUNC_LEFT_________________         &kp F1   &kp F2   &kp F3   &kp F4   &kp F5
#define _________________FUNC_RIGHT________________         &kp F6   &kp F7   &kp F8   &kp F9   &kp F10

#define _________________SYM_LEFT__________________         &kp EXCL  &kp AT    &kp HASH        &kp DLLR &kp PRCNT
#define _________________SYM_RIGHT_________________         &kp CARET &kp AMPS  &kp KP_MULTIPLY &kp LPAR &kp RPAR

#define ___________________BLANK___________________         _______ _______ _______ _______ _______

#define _________________COLEMAK_L1________________         ___Q___    ___W___    ___F___    ___P___    ___B___
#define _________________COLEMAK_L2________________         ___A___    ___R___    ___S___    ___T___    ___G___
#define _________________COLEMAK_L3________________         ___Z___    ___X___    ___C___    ___D___    ___V___

#define _________________COLEMAK_R1________________         ___J___    ___L___    ___U___    ___Y___    _SCLON_
#define _________________COLEMAK_R2________________         ___M___    ___N___    ___E___    ___I___    ___O___
#define _________________COLEMAK_R3________________         ___K___    ___H___    _COMMA_    __DOT__    _FSLH__

#define _________________LOWER_L1__________________         ________________NUMBER_LEFT________________
#define _________________LOWER_L2__________________         _________________FUNC_LEFT_________________
#define _________________LOWER_L3__________________         ___________________BLANK___________________

#define _________________LOWER_R1__________________         ________________NUMBER_RIGHT_______________
#define _________________LOWER_R2__________________         _________________FUNC_RIGHT________________
#define _________________LOWER_R3__________________         _PLUS__ &kp UNDER _PIPE__ &kp LEFT_BRACE &kp RIGHT_BRACE

#define _________________RAISE_L1__________________         _________________SYM_LEFT__________________
#define _________________RAISE_L2__________________         ___________________BLANK___________________
#define _________________RAISE_L3__________________         _BTCLR_ _______ &kp K_MUTE &kp C_VOL_DN &kp C_VOLUME_UP

#define _________________RAISE_R1__________________         _________________SYM_RIGHT_________________
#define _________________RAISE_R2__________________         _______ _LEFT__  __UP___  _DOWN__ _RIGHT_
#define _________________RAISE_R3__________________         _EQUAL_ _MINUS_ _______  &kp LEFT_BRACKET &kp RIGHT_BRACKET

// clang-format on
