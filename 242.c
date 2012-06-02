#ifdef ___LINKER_INFO
; File: "242.c", produced by Gambit-C v4.6.1
(
406001
" 242.o1"
(" 242.o1")
(
)
(
)
(
" 242.o1"
"adjoin-position"
"empty-board"
"queens"
"safe?"
)
(
)
(
"-"
"="
"cons"
"display"
"enumerate-interval"
"filter"
"flat-map"
"list"
"load"
"map"
"newline"
)
 #f
)
#else
#define ___VERSION 406001
#define ___MODULE_NAME " 242.o1"
#define ___LINKER_ID ____20_242_2e_o1
#define ___MH_PROC ___H__20_242_2e_o1
#define ___SCRIPT_LINE 0
#define ___GLO_COUNT 16
#define ___SUP_COUNT 5
#define ___SUB_COUNT 1
#define ___LBL_COUNT 63
#include "gambit.h"

___NEED_GLO(___G__20_242_2e_o1)
___NEED_GLO(___G__2d_)
___NEED_GLO(___G__3d_)
___NEED_GLO(___G_adjoin_2d_position)
___NEED_GLO(___G_cons)
___NEED_GLO(___G_display)
___NEED_GLO(___G_empty_2d_board)
___NEED_GLO(___G_enumerate_2d_interval)
___NEED_GLO(___G_filter)
___NEED_GLO(___G_flat_2d_map)
___NEED_GLO(___G_list)
___NEED_GLO(___G_load)
___NEED_GLO(___G_map)
___NEED_GLO(___G_newline)
___NEED_GLO(___G_queens)
___NEED_GLO(___G_safe_3f_)

___BEGIN_GLO
___DEF_GLO(0," 242.o1")
___DEF_GLO(1,"adjoin-position")
___DEF_GLO(2,"empty-board")
___DEF_GLO(3,"queens")
___DEF_GLO(4,"safe?")
___DEF_GLO(5,"-")
___DEF_GLO(6,"=")
___DEF_GLO(7,"cons")
___DEF_GLO(8,"display")
___DEF_GLO(9,"enumerate-interval")
___DEF_GLO(10,"filter")
___DEF_GLO(11,"flat-map")
___DEF_GLO(12,"list")
___DEF_GLO(13,"load")
___DEF_GLO(14,"map")
___DEF_GLO(15,"newline")
___END_GLO

___DEF_SUB_STR(___X0,8)
               ___STR8(116,101,115,116,46,115,99,109)
               ___STR0

___BEGIN_SUB
 ___DEF_SUB(___X0)
___END_SUB



#undef ___MD_ALL
#define ___MD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___MR_ALL
#define ___MR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___MW_ALL
#define ___MW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_M_COD
___BEGIN_M_HLBL
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0__20_242_2e_o1)
___DEF_M_HLBL(___L1__20_242_2e_o1)
___DEF_M_HLBL(___L2__20_242_2e_o1)
___DEF_M_HLBL(___L3__20_242_2e_o1)
___DEF_M_HLBL(___L4__20_242_2e_o1)
___DEF_M_HLBL(___L5__20_242_2e_o1)
___DEF_M_HLBL(___L6__20_242_2e_o1)
___DEF_M_HLBL(___L7__20_242_2e_o1)
___DEF_M_HLBL(___L8__20_242_2e_o1)
___DEF_M_HLBL(___L9__20_242_2e_o1)
___DEF_M_HLBL(___L10__20_242_2e_o1)
___DEF_M_HLBL(___L11__20_242_2e_o1)
___DEF_M_HLBL(___L12__20_242_2e_o1)
___DEF_M_HLBL(___L13__20_242_2e_o1)
___DEF_M_HLBL(___L14__20_242_2e_o1)
___DEF_M_HLBL(___L15__20_242_2e_o1)
___DEF_M_HLBL(___L16__20_242_2e_o1)
___DEF_M_HLBL(___L17__20_242_2e_o1)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_adjoin_2d_position)
___DEF_M_HLBL(___L1_adjoin_2d_position)
___DEF_M_HLBL(___L2_adjoin_2d_position)
___DEF_M_HLBL(___L3_adjoin_2d_position)
___DEF_M_HLBL(___L4_adjoin_2d_position)
___DEF_M_HLBL(___L5_adjoin_2d_position)
___DEF_M_HLBL(___L6_adjoin_2d_position)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_safe_3f_)
___DEF_M_HLBL(___L1_safe_3f_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_queens)
___DEF_M_HLBL(___L1_queens)
___DEF_M_HLBL(___L2_queens)
___DEF_M_HLBL(___L3_queens)
___DEF_M_HLBL(___L4_queens)
___DEF_M_HLBL(___L5_queens)
___DEF_M_HLBL(___L6_queens)
___DEF_M_HLBL(___L7_queens)
___DEF_M_HLBL(___L8_queens)
___DEF_M_HLBL(___L9_queens)
___DEF_M_HLBL(___L10_queens)
___DEF_M_HLBL(___L11_queens)
___DEF_M_HLBL(___L12_queens)
___DEF_M_HLBL(___L13_queens)
___DEF_M_HLBL(___L14_queens)
___DEF_M_HLBL(___L15_queens)
___DEF_M_HLBL(___L16_queens)
___DEF_M_HLBL(___L17_queens)
___DEF_M_HLBL(___L18_queens)
___DEF_M_HLBL(___L19_queens)
___DEF_M_HLBL(___L20_queens)
___DEF_M_HLBL(___L21_queens)
___DEF_M_HLBL(___L22_queens)
___DEF_M_HLBL(___L23_queens)
___DEF_M_HLBL(___L24_queens)
___DEF_M_HLBL(___L25_queens)
___DEF_M_HLBL(___L26_queens)
___DEF_M_HLBL(___L27_queens)
___DEF_M_HLBL(___L28_queens)
___DEF_M_HLBL(___L29_queens)
___DEF_M_HLBL(___L30_queens)
___DEF_M_HLBL(___L31_queens)
___END_M_HLBL

___BEGIN_M_SW

#undef ___PH_PROC
#define ___PH_PROC ___H__20_242_2e_o1
#undef ___PH_LBL0
#define ___PH_LBL0 1
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0__20_242_2e_o1)
___DEF_P_HLBL(___L1__20_242_2e_o1)
___DEF_P_HLBL(___L2__20_242_2e_o1)
___DEF_P_HLBL(___L3__20_242_2e_o1)
___DEF_P_HLBL(___L4__20_242_2e_o1)
___DEF_P_HLBL(___L5__20_242_2e_o1)
___DEF_P_HLBL(___L6__20_242_2e_o1)
___DEF_P_HLBL(___L7__20_242_2e_o1)
___DEF_P_HLBL(___L8__20_242_2e_o1)
___DEF_P_HLBL(___L9__20_242_2e_o1)
___DEF_P_HLBL(___L10__20_242_2e_o1)
___DEF_P_HLBL(___L11__20_242_2e_o1)
___DEF_P_HLBL(___L12__20_242_2e_o1)
___DEF_P_HLBL(___L13__20_242_2e_o1)
___DEF_P_HLBL(___L14__20_242_2e_o1)
___DEF_P_HLBL(___L15__20_242_2e_o1)
___DEF_P_HLBL(___L16__20_242_2e_o1)
___DEF_P_HLBL(___L17__20_242_2e_o1)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0__20_242_2e_o1)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L__20_242_2e_o1)
   ___SET_STK(1,___R0)
   ___SET_R1(___SUB(0))
   ___SET_R0(___LBL(2))
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1__20_242_2e_o1)
   ___JUMPGLOSAFE(___SET_NARGS(1),13,___G_load)
___DEF_SLBL(2,___L2__20_242_2e_o1)
   ___SET_GLO(1,___G_adjoin_2d_position,___PRC(20))
   ___SET_GLO(4,___G_safe_3f_,___PRC(28))
   ___SET_GLO(2,___G_empty_2d_board,___NUL)
   ___SET_GLO(3,___G_queens,___PRC(31))
   ___SET_R1(___FIX(2L))
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(1),3,___G_queens)
___DEF_SLBL(3,___L3__20_242_2e_o1)
   ___IF(___NOT(___EQP(___GLO(14,___G_map),___PRM(14,___G_map))))
   ___GOTO(___L23__20_242_2e_o1)
   ___END_IF
   ___SET_R2(___LBL(13))
   ___SET_R3(___R1)
   ___SET_R0(___STK(-3))
   ___ADJFP(-4)
   ___POLL(4)
___DEF_SLBL(4,___L4__20_242_2e_o1)
   ___GOTO(___L19__20_242_2e_o1)
___DEF_GLBL(___L18__20_242_2e_o1)
   ___SET_R3(___CDR(___R3))
   ___POLL(5)
___DEF_SLBL(5,___L5__20_242_2e_o1)
___DEF_GLBL(___L19__20_242_2e_o1)
   ___IF(___PAIRP(___R3))
   ___GOTO(___L18__20_242_2e_o1)
   ___END_IF
   ___IF(___NOT(___NULLP(___R3)))
   ___GOTO(___L22__20_242_2e_o1)
   ___END_IF
   ___SET_STK(1,___R2)
   ___SET_R2(___R1)
   ___SET_R1(___STK(1))
   ___POLL(6)
___DEF_SLBL(6,___L6__20_242_2e_o1)
   ___IF(___NOT(___PAIRP(___R2)))
   ___GOTO(___L21__20_242_2e_o1)
   ___END_IF
___DEF_GLBL(___L20__20_242_2e_o1)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_R1(___CAR(___R2))
   ___SET_R0(___LBL(8))
   ___ADJFP(8)
   ___POLL(7)
___DEF_SLBL(7,___L7__20_242_2e_o1)
   ___JUMPGENSAFE(___SET_NARGS(1),___STK(-6))
___DEF_SLBL(8,___L8__20_242_2e_o1)
   ___SET_STK(-4,___R1)
   ___SET_R2(___CDR(___STK(-5)))
   ___SET_R1(___STK(-6))
   ___SET_R0(___LBL(9))
   ___IF(___PAIRP(___R2))
   ___GOTO(___L20__20_242_2e_o1)
   ___END_IF
___DEF_GLBL(___L21__20_242_2e_o1)
   ___SET_R1(___NUL)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(9,___L9__20_242_2e_o1)
   ___SET_R1(___CONS(___STK(-4),___R1))
   ___CHECK_HEAP(10,4096)
___DEF_SLBL(10,___L10__20_242_2e_o1)
   ___POLL(11)
___DEF_SLBL(11,___L11__20_242_2e_o1)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L22__20_242_2e_o1)
   ___SET_STK(1,___R2)
   ___SET_R2(___R1)
   ___SET_R1(___STK(1))
   ___ADJFP(1)
   ___POLL(12)
___DEF_SLBL(12,___L12__20_242_2e_o1)
   ___ADJFP(-1)
   ___JUMPGLOSAFE(___SET_NARGS(2),14,___G_map)
___DEF_SLBL(13,___L13__20_242_2e_o1)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(13,1,0,0)
   ___SET_STK(1,___R0)
   ___SET_R0(___LBL(15))
   ___ADJFP(4)
   ___POLL(14)
___DEF_SLBL(14,___L14__20_242_2e_o1)
   ___JUMPGLOSAFE(___SET_NARGS(1),8,___G_display)
___DEF_SLBL(15,___L15__20_242_2e_o1)
   ___SET_R1(___GLO(15,___G_newline))
   ___SET_R0(___STK(-3))
   ___POLL(16)
___DEF_SLBL(16,___L16__20_242_2e_o1)
   ___ADJFP(-4)
   ___JUMPGLOSAFE(___SET_NARGS(1),8,___G_display)
___DEF_GLBL(___L23__20_242_2e_o1)
   ___SET_R2(___R1)
   ___SET_R1(___LBL(13))
   ___SET_R0(___STK(-3))
   ___POLL(17)
___DEF_SLBL(17,___L17__20_242_2e_o1)
   ___ADJFP(-4)
   ___JUMPGLOSAFE(___SET_NARGS(2),14,___G_map)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_adjoin_2d_position
#undef ___PH_LBL0
#define ___PH_LBL0 20
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_adjoin_2d_position)
___DEF_P_HLBL(___L1_adjoin_2d_position)
___DEF_P_HLBL(___L2_adjoin_2d_position)
___DEF_P_HLBL(___L3_adjoin_2d_position)
___DEF_P_HLBL(___L4_adjoin_2d_position)
___DEF_P_HLBL(___L5_adjoin_2d_position)
___DEF_P_HLBL(___L6_adjoin_2d_position)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_adjoin_2d_position)
   ___IF_NARGS_EQ(3,___NOTHING)
   ___WRONG_NARGS(0,3,0,0)
___DEF_GLBL(___L_adjoin_2d_position)
   ___IF(___NOT(___EQP(___GLO(12,___G_list),___PRM(12,___G_list))))
   ___GOTO(___L9_adjoin_2d_position)
   ___END_IF
   ___BEGIN_ALLOC_LIST(2,___R1)
   ___ADD_LIST_ELEM(1,___R2)
   ___END_ALLOC_LIST(2)
   ___SET_R1(___GET_LIST(2))
   ___CHECK_HEAP(1,4096)
___DEF_SLBL(1,___L1_adjoin_2d_position)
   ___IF(___EQP(___GLO(7,___G_cons),___PRM(7,___G_cons)))
   ___GOTO(___L7_adjoin_2d_position)
   ___END_IF
   ___GOTO(___L8_adjoin_2d_position)
___DEF_SLBL(2,___L2_adjoin_2d_position)
   ___SET_R3(___STK(-6))
   ___SET_R0(___STK(-7))
   ___ADJFP(-8)
   ___IF(___NOT(___EQP(___GLO(7,___G_cons),___PRM(7,___G_cons))))
   ___GOTO(___L8_adjoin_2d_position)
   ___END_IF
___DEF_GLBL(___L7_adjoin_2d_position)
   ___SET_R1(___CONS(___R1,___R3))
   ___CHECK_HEAP(3,4096)
___DEF_SLBL(3,___L3_adjoin_2d_position)
   ___POLL(4)
___DEF_SLBL(4,___L4_adjoin_2d_position)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L8_adjoin_2d_position)
   ___SET_R2(___R3)
   ___POLL(5)
___DEF_SLBL(5,___L5_adjoin_2d_position)
   ___JUMPGLOSAFE(___SET_NARGS(2),7,___G_cons)
___DEF_GLBL(___L9_adjoin_2d_position)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R3)
   ___SET_STK(3,___R2)
   ___SET_R2(___R1)
   ___SET_R1(___STK(3))
   ___SET_R0(___LBL(2))
   ___ADJFP(8)
   ___POLL(6)
___DEF_SLBL(6,___L6_adjoin_2d_position)
   ___JUMPGLOSAFE(___SET_NARGS(2),12,___G_list)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_safe_3f_
#undef ___PH_LBL0
#define ___PH_LBL0 28
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_R1 ___W_R2 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_safe_3f_)
___DEF_P_HLBL(___L1_safe_3f_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_safe_3f_)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L_safe_3f_)
   ___IF(___EQP(___GLO(6,___G__3d_),___PRM(6,___G__3d_)))
   ___GOTO(___L2_safe_3f_)
   ___END_IF
   ___SET_R2(___FIX(1L))
   ___SET_R1(___FIX(1L))
   ___POLL(1)
___DEF_SLBL(1,___L1_safe_3f_)
   ___JUMPGLOSAFE(___SET_NARGS(2),6,___G__3d_)
___DEF_GLBL(___L2_safe_3f_)
   ___SET_R1(___TRU)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_queens
#undef ___PH_LBL0
#define ___PH_LBL0 31
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_queens)
___DEF_P_HLBL(___L1_queens)
___DEF_P_HLBL(___L2_queens)
___DEF_P_HLBL(___L3_queens)
___DEF_P_HLBL(___L4_queens)
___DEF_P_HLBL(___L5_queens)
___DEF_P_HLBL(___L6_queens)
___DEF_P_HLBL(___L7_queens)
___DEF_P_HLBL(___L8_queens)
___DEF_P_HLBL(___L9_queens)
___DEF_P_HLBL(___L10_queens)
___DEF_P_HLBL(___L11_queens)
___DEF_P_HLBL(___L12_queens)
___DEF_P_HLBL(___L13_queens)
___DEF_P_HLBL(___L14_queens)
___DEF_P_HLBL(___L15_queens)
___DEF_P_HLBL(___L16_queens)
___DEF_P_HLBL(___L17_queens)
___DEF_P_HLBL(___L18_queens)
___DEF_P_HLBL(___L19_queens)
___DEF_P_HLBL(___L20_queens)
___DEF_P_HLBL(___L21_queens)
___DEF_P_HLBL(___L22_queens)
___DEF_P_HLBL(___L23_queens)
___DEF_P_HLBL(___L24_queens)
___DEF_P_HLBL(___L25_queens)
___DEF_P_HLBL(___L26_queens)
___DEF_P_HLBL(___L27_queens)
___DEF_P_HLBL(___L28_queens)
___DEF_P_HLBL(___L29_queens)
___DEF_P_HLBL(___L30_queens)
___DEF_P_HLBL(___L31_queens)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_queens)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_queens)
   ___SET_R2(___R1)
   ___POLL(1)
___DEF_SLBL(1,___L1_queens)
   ___GOTO(___L33_queens)
___DEF_SLBL(2,___L2_queens)
   ___SET_R3(___R1)
   ___SET_R1(___STK(-4))
   ___ADJFP(-5)
___DEF_GLBL(___L32_queens)
   ___SET_R2(___R3)
   ___SET_R0(___LBL(29))
   ___ADJFP(5)
   ___POLL(3)
___DEF_SLBL(3,___L3_queens)
___DEF_GLBL(___L33_queens)
   ___IF(___NOT(___EQP(___GLO(6,___G__3d_),___PRM(6,___G__3d_))))
   ___GOTO(___L45_queens)
   ___END_IF
   ___IF(___NOT(___FIXNUMP(___R2)))
   ___GOTO(___L45_queens)
   ___END_IF
   ___IF(___NOT(___FIXEQ(___R2,___FIX(0L))))
   ___GOTO(___L36_queens)
   ___END_IF
___DEF_GLBL(___L34_queens)
   ___SET_STK(1,___GLO(2,___G_empty_2d_board))
   ___ADJFP(1)
   ___IF(___NOT(___EQP(___GLO(12,___G_list),___PRM(12,___G_list))))
   ___GOTO(___L35_queens)
   ___END_IF
   ___SET_R1(___CONS(___STK(0),___NUL))
   ___CHECK_HEAP(4,4096)
___DEF_SLBL(4,___L4_queens)
   ___POLL(5)
___DEF_SLBL(5,___L5_queens)
   ___ADJFP(-1)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L35_queens)
   ___SET_R1(___STK(0))
   ___POLL(6)
___DEF_SLBL(6,___L6_queens)
   ___ADJFP(-1)
   ___JUMPGLOSAFE(___SET_NARGS(1),12,___G_list)
___DEF_SLBL(7,___L7_queens)
   ___IF(___NOT(___FALSEP(___R1)))
   ___GOTO(___L44_queens)
   ___END_IF
   ___SET_R2(___STK(-5))
   ___SET_R1(___STK(-6))
   ___SET_R0(___STK(-7))
   ___ADJFP(-8)
___DEF_GLBL(___L36_queens)
   ___SET_STK(1,___ALLOC_CLO(1))
   ___BEGIN_SETUP_CLO(1,___STK(1),26)
   ___ADD_CLO_ELEM(0,___R2)
   ___END_SETUP_CLO(1)
   ___SET_STK(2,___R0)
   ___SET_STK(3,___ALLOC_CLO(2))
   ___BEGIN_SETUP_CLO(2,___STK(3),10)
   ___ADD_CLO_ELEM(0,___R1)
   ___ADD_CLO_ELEM(1,___R2)
   ___END_SETUP_CLO(2)
   ___ADJFP(3)
   ___CHECK_HEAP(8,4096)
___DEF_SLBL(8,___L8_queens)
   ___IF(___NOT(___EQP(___GLO(5,___G__2d_),___PRM(5,___G__2d_))))
   ___GOTO(___L37_queens)
   ___END_IF
   ___IF(___NOT(___FIXNUMP(___R2)))
   ___GOTO(___L37_queens)
   ___END_IF
   ___SET_R3(___FIXSUBP(___R2,___FIX(1L)))
   ___IF(___NOT(___FALSEP(___R3)))
   ___GOTO(___L32_queens)
   ___END_IF
___DEF_GLBL(___L37_queens)
   ___SET_STK(1,___R1)
   ___SET_R1(___R2)
   ___SET_R2(___FIX(1L))
   ___SET_R0(___LBL(2))
   ___ADJFP(5)
   ___POLL(9)
___DEF_SLBL(9,___L9_queens)
   ___JUMPGLOSAFE(___SET_NARGS(2),5,___G__2d_)
___DEF_SLBL(10,___L10_queens)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(10,1,0,0)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R4)
   ___SET_R2(___CLO(___R4,1))
   ___SET_R1(___FIX(1L))
   ___SET_R0(___LBL(12))
   ___ADJFP(8)
   ___POLL(11)
___DEF_SLBL(11,___L11_queens)
   ___JUMPGLOSAFE(___SET_NARGS(2),9,___G_enumerate_2d_interval)
___DEF_SLBL(12,___L12_queens)
   ___SET_STK(-4,___ALLOC_CLO(2))
   ___BEGIN_SETUP_CLO(2,___STK(-4),24)
   ___ADD_CLO_ELEM(0,___CLO(___STK(-5),2))
   ___ADD_CLO_ELEM(1,___STK(-6))
   ___END_SETUP_CLO(2)
   ___ADJFP(-4)
   ___CHECK_HEAP(13,4096)
___DEF_SLBL(13,___L13_queens)
   ___IF(___NOT(___EQP(___GLO(14,___G_map),___PRM(14,___G_map))))
   ___GOTO(___L43_queens)
   ___END_IF
   ___SET_R2(___STK(0))
   ___SET_R3(___R1)
   ___SET_R0(___STK(-3))
   ___ADJFP(-4)
   ___POLL(14)
___DEF_SLBL(14,___L14_queens)
   ___GOTO(___L39_queens)
___DEF_GLBL(___L38_queens)
   ___SET_R3(___CDR(___R3))
   ___POLL(15)
___DEF_SLBL(15,___L15_queens)
___DEF_GLBL(___L39_queens)
   ___IF(___PAIRP(___R3))
   ___GOTO(___L38_queens)
   ___END_IF
   ___IF(___NOT(___NULLP(___R3)))
   ___GOTO(___L42_queens)
   ___END_IF
   ___SET_STK(1,___R2)
   ___SET_R2(___R1)
   ___SET_R1(___STK(1))
   ___POLL(16)
___DEF_SLBL(16,___L16_queens)
   ___IF(___NOT(___PAIRP(___R2)))
   ___GOTO(___L41_queens)
   ___END_IF
___DEF_GLBL(___L40_queens)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_R1(___CAR(___R2))
   ___SET_R0(___LBL(18))
   ___ADJFP(8)
   ___POLL(17)
___DEF_SLBL(17,___L17_queens)
   ___JUMPGENSAFE(___SET_NARGS(1),___STK(-6))
___DEF_SLBL(18,___L18_queens)
   ___SET_STK(-4,___R1)
   ___SET_R2(___CDR(___STK(-5)))
   ___SET_R1(___STK(-6))
   ___SET_R0(___LBL(19))
   ___IF(___PAIRP(___R2))
   ___GOTO(___L40_queens)
   ___END_IF
___DEF_GLBL(___L41_queens)
   ___SET_R1(___NUL)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(19,___L19_queens)
   ___SET_R1(___CONS(___STK(-4),___R1))
   ___CHECK_HEAP(20,4096)
___DEF_SLBL(20,___L20_queens)
   ___POLL(21)
___DEF_SLBL(21,___L21_queens)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L42_queens)
   ___SET_STK(1,___R2)
   ___SET_R2(___R1)
   ___SET_R1(___STK(1))
   ___ADJFP(1)
   ___POLL(22)
___DEF_SLBL(22,___L22_queens)
   ___ADJFP(-1)
   ___JUMPGLOSAFE(___SET_NARGS(2),14,___G_map)
___DEF_GLBL(___L43_queens)
   ___SET_R2(___R1)
   ___SET_R1(___STK(0))
   ___SET_R0(___STK(-3))
   ___POLL(23)
___DEF_SLBL(23,___L23_queens)
   ___ADJFP(-4)
   ___JUMPGLOSAFE(___SET_NARGS(2),14,___G_map)
___DEF_SLBL(24,___L24_queens)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(24,1,0,0)
   ___SET_R3(___CLO(___R4,2))
   ___SET_R2(___CLO(___R4,1))
   ___POLL(25)
___DEF_SLBL(25,___L25_queens)
   ___JUMPGLOSAFE(___SET_NARGS(3),1,___G_adjoin_2d_position)
___DEF_SLBL(26,___L26_queens)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(26,1,0,0)
   ___SET_R2(___R1)
   ___SET_R1(___CLO(___R4,1))
   ___POLL(27)
___DEF_SLBL(27,___L27_queens)
   ___JUMPGLOSAFE(___SET_NARGS(2),4,___G_safe_3f_)
___DEF_GLBL(___L44_queens)
   ___SET_R0(___STK(-7))
   ___ADJFP(-8)
   ___GOTO(___L34_queens)
___DEF_GLBL(___L45_queens)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_R1(___R2)
   ___SET_R2(___FIX(0L))
   ___SET_R0(___LBL(7))
   ___ADJFP(8)
   ___POLL(28)
___DEF_SLBL(28,___L28_queens)
   ___JUMPGLOSAFE(___SET_NARGS(2),6,___G__3d_)
___DEF_SLBL(29,___L29_queens)
   ___SET_R2(___R1)
   ___SET_R0(___LBL(30))
   ___SET_R1(___STK(-5))
   ___JUMPGLOSAFE(___SET_NARGS(2),11,___G_flat_2d_map)
___DEF_SLBL(30,___L30_queens)
   ___SET_R2(___R1)
   ___SET_R0(___STK(-6))
   ___SET_R1(___STK(-7))
   ___POLL(31)
___DEF_SLBL(31,___L31_queens)
   ___ADJFP(-8)
   ___JUMPGLOSAFE(___SET_NARGS(2),10,___G_filter)
___END_P_SW
___END_P_COD

___END_M_SW
___END_M_COD

___BEGIN_LBL
 ___DEF_LBL_INTRO(___H__20_242_2e_o1," 242.o1",___REF_FAL,18,0)
,___DEF_LBL_PROC(___H__20_242_2e_o1,0,0)
,___DEF_LBL_RET(___H__20_242_2e_o1,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H__20_242_2e_o1,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H__20_242_2e_o1,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H__20_242_2e_o1,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H__20_242_2e_o1,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H__20_242_2e_o1,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H__20_242_2e_o1,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_RET(___H__20_242_2e_o1,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H__20_242_2e_o1,___IFD(___RETN,5,0,0x9L))
,___DEF_LBL_RET(___H__20_242_2e_o1,___IFD(___RETI,8,0,0x3f01L))
,___DEF_LBL_RET(___H__20_242_2e_o1,___IFD(___RETI,8,0,0x3f01L))
,___DEF_LBL_RET(___H__20_242_2e_o1,___IFD(___RETI,1,4,0x3f0L))
,___DEF_LBL_PROC(___H__20_242_2e_o1,1,0)
,___DEF_LBL_RET(___H__20_242_2e_o1,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H__20_242_2e_o1,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H__20_242_2e_o1,___IFD(___RETI,4,4,0x3f0L))
,___DEF_LBL_RET(___H__20_242_2e_o1,___IFD(___RETI,4,4,0x3f0L))
,___DEF_LBL_INTRO(___H_adjoin_2d_position,0,___REF_FAL,7,0)
,___DEF_LBL_PROC(___H_adjoin_2d_position,3,0)
,___DEF_LBL_RET(___H_adjoin_2d_position,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_adjoin_2d_position,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_adjoin_2d_position,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_adjoin_2d_position,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_adjoin_2d_position,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_adjoin_2d_position,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_INTRO(___H_safe_3f_,0,___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_safe_3f_,2,0)
,___DEF_LBL_RET(___H_safe_3f_,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_INTRO(___H_queens,0,___REF_FAL,32,0)
,___DEF_LBL_PROC(___H_queens,1,0)
,___DEF_LBL_RET(___H_queens,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_queens,___IFD(___RETN,5,1,0xfL))
,___DEF_LBL_RET(___H_queens,___IFD(___RETI,8,1,0x3f07L))
,___DEF_LBL_RET(___H_queens,___IFD(___RETI,1,4,0x3f0L))
,___DEF_LBL_RET(___H_queens,___IFD(___RETI,1,4,0x3f0L))
,___DEF_LBL_RET(___H_queens,___IFD(___RETI,1,4,0x3f0L))
,___DEF_LBL_RET(___H_queens,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_queens,___IFD(___RETI,3,1,0x3f7L))
,___DEF_LBL_RET(___H_queens,___IFD(___RETI,8,1,0x3f0fL))
,___DEF_LBL_PROC(___H_queens,1,2)
,___DEF_LBL_RET(___H_queens,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_RET(___H_queens,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_queens,___IFD(___RETI,4,0,0x3ffL))
,___DEF_LBL_RET(___H_queens,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_queens,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_queens,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_queens,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_RET(___H_queens,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_queens,___IFD(___RETN,5,0,0x9L))
,___DEF_LBL_RET(___H_queens,___IFD(___RETI,8,0,0x3f01L))
,___DEF_LBL_RET(___H_queens,___IFD(___RETI,8,0,0x3f01L))
,___DEF_LBL_RET(___H_queens,___IFD(___RETI,1,4,0x3f0L))
,___DEF_LBL_RET(___H_queens,___IFD(___RETI,4,4,0x3f0L))
,___DEF_LBL_PROC(___H_queens,1,2)
,___DEF_LBL_RET(___H_queens,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_PROC(___H_queens,1,1)
,___DEF_LBL_RET(___H_queens,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_queens,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_RET(___H_queens,___IFD(___RETN,5,1,0x7L))
,___DEF_LBL_RET(___H_queens,___IFD(___RETN,5,1,0x3L))
,___DEF_LBL_RET(___H_queens,___IFD(___RETI,8,8,0x3f01L))
___END_LBL

___BEGIN_MOD1
___DEF_PRM(0,___G__20_242_2e_o1,1)
___END_MOD1

___BEGIN_MOD2
___END_MOD2

#endif
