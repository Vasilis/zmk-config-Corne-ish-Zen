#define _______ &trans

#define _LEFT__ &kp LEFT
#define __UP___ &kp UP
#define _DOWN__ &kp DOWN
#define _RIGHT_ &kp RIGHT

#define AS(keycode) &as LS(keycode) keycode

#define ___A___ AS(A)
#define ___B___ AS(B)
#define ___C___ &as LS(C) C
#define ___D___ &as LS(D) D
#define ___E___ &as LS(E) E
#define ___F___ &as LS(F) F
#define ___G___ &as LS(G) G
#define ___H___ &as LS(H) H
#define ___I___ &as LS(I) I
#define ___J___ &as LS(J) J
#define ___K___ &as LS(K) K
#define ___L___ &as LS(L) L
#define ___M___ &as LS(M) M
#define ___N___ &as LS(N) N
#define ___O___ &as LS(O) O
#define ___P___ &as LS(P) P
#define ___Q___ &as LS(Q) Q
#define ___R___ &as LS(R) R
#define ___S___ &as LS(S) S
#define ___T___ &as LS(T) T
#define ___U___ &as LS(U) U
#define ___V___ &as LS(V) V
#define ___W___ &as LS(W) W
#define ___X___ &as LS(X) X
#define ___Y___ &as LS(Y) Y
#define ___Z___ &as LS(Z) Z

#define ___0___ &kp N0
#define ___1___ &kp N1
#define ___2___ &kp N2
#define ___3___ &kp N3
#define ___4___ &kp N4
#define ___5___ &kp N5
#define ___6___ &kp N6
#define ___7___ &kp N7
#define ___8___ &kp N8
#define ___9___ &kp N9

#define _ARING_ &kp RA(A)
#define _OSLSH_ &kp RA(O)
#define _AELIG_ &kp RA(SINGLE_QUOTE)

#define _SPACE_ &kp SPACE
#define __TAB__ &kp TAB
#define _ENTER_ &kp ENTER
#define _BKSPC_ &kp BACKSPACE
#define __DEL__ &kp DELETE
#define __ESC__ &kp ESC
#define _LGUI__ &kp LGUI
#define _LOWER_ &mo 1
#define _RAISE_ &mo 2

#define _LSHFT_ &sk LEFT_SHIFT
#define _RSHFT_ &sk RIGHT_SHIFT
#define _LCTRL_ &sk LEFT_CONTROL
#define _LOPT__ &sk LEFT_ALT
#define _LCMD__ &sk LEFT_COMMAND

#define _MINUS_ &kp MINUS
#define _PLUS__ &kp PLUS
#define _EQUAL_ &kp EQUAL

#define _COMMA_ &kp COMMA
#define _EXCL__ &kp EXCL
#define _SCLON_ &kp SEMI
#define _COLON_ &kp COLON
#define _GRAVE_ &kp GRAVE
#define _TILDE_ &kp TILDE
#define _PIPE__ &kp PIPE
#define __DOT__ &kp PERIOD
#define _FSLH__ &kp FSLH
#define _BSLH__ &kp BSLH
#define _SQUOT_ &kp SINGLE_QUOTE
#define _DQUOT_ &kp DOUBLE_QUOTES

#define MAC_UNDO &kp LG(Z)
#define MAC_REDO &kp LS(LG(Z))
#define MAC_COPY &kp LG(C)
#define MAC_PASTE &kp LG(V)
#define MAC_CUT &kp LG(X)
#define MAC_SELECT_ALL &kp LG(A)

#define o_TABL_ &kp LS(LG(LEFT_BRACKET))
#define o_TABR_ &kp LS(LG(RIGHT_BRACKET))

#define _W_NEXT &kp LG(NON_US_BACKSLASH)
#define _W_PREV &kp LS(LG(NON_US_BACKSLASH))

#define _BRIMN_ &kp F14
#define _BRIMX_ &kp F15

#define _DSKT1_ &kp LS(LC(LA(LG(N1))))
#define _DSKT2_ &kp LS(LC(LA(LG(N2))))
#define _DSKT3_ &kp LS(LC(LA(LG(N3))))
#define _DSKT4_ &kp LS(LC(LA(LG(N4))))
#define _DSKT5_ &kp LS(LC(LA(LG(N5))))
#define _DSKT6_ &kp LS(LC(LA(LG(N6))))

#define _SCRSH_ &kp LS(LG(N4))

#define _BTCLR_ &bt BT_CLR
#define _BT_00_ &bt BT_SEL 0
#define _BT_01_ &bt BT_SEL 1
#define _BT_02_ &bt BT_SEL 2
