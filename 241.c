#ifdef ___LINKER_INFO
; File: "241.c", produced by Gambit-C v4.6.1
(
406001
" 241.o1"
(" 241.o1")
(
)
(
)
(
" 241.o1"
"unique-triplets"
)
(
"ordered-triplets"
)
(
"+"
"-"
"="
"accumulate"
"enumerate-interval"
"filter"
"flat-map"
"list"
"load"
"map"
)
 #f
)
#else
#define ___VERSION 406001
#define ___MODULE_NAME " 241.o1"
#define ___LINKER_ID ____20_241_2e_o1
#define ___MH_PROC ___H__20_241_2e_o1
#define ___SCRIPT_LINE 0
#define ___GLO_COUNT 13
#define ___SUP_COUNT 3
#define ___SUB_COUNT 1
#define ___LBL_COUNT 47
#include "gambit.h"

___NEED_GLO(___G__20_241_2e_o1)
___NEED_GLO(___G__2b_)
___NEED_GLO(___G__2d_)
___NEED_GLO(___G__3d_)
___NEED_GLO(___G_accumulate)
___NEED_GLO(___G_enumerate_2d_interval)
___NEED_GLO(___G_filter)
___NEED_GLO(___G_flat_2d_map)
___NEED_GLO(___G_list)
___NEED_GLO(___G_load)
___NEED_GLO(___G_map)
___NEED_GLO(___G_ordered_2d_triplets)
___NEED_GLO(___G_unique_2d_triplets)

___BEGIN_GLO
___DEF_GLO(0," 241.o1")
___DEF_GLO(1,"ordered-triplets")
___DEF_GLO(2,"unique-triplets")
___DEF_GLO(3,"+")
___DEF_GLO(4,"-")
___DEF_GLO(5,"=")
___DEF_GLO(6,"accumulate")
___DEF_GLO(7,"enumerate-interval")
___DEF_GLO(8,"filter")
___DEF_GLO(9,"flat-map")
___DEF_GLO(10,"list")
___DEF_GLO(11,"load")
___DEF_GLO(12,"map")
___END_GLO

___DEF_SUB_STR(___X0,8)
               ___STR8(116,101,115,116,46,115,99,109)
               ___STR0

___BEGIN_SUB
 ___DEF_SUB(___X0)
___END_SUB



#undef ___MD_ALL
#define ___MD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4 ___D_F64(___F64V1) ___D_F64( \
___F64V2)
#undef ___MR_ALL
#define ___MR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___MW_ALL
#define ___MW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_M_COD
___BEGIN_M_HLBL
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0__20_241_2e_o1)
___DEF_M_HLBL(___L1__20_241_2e_o1)
___DEF_M_HLBL(___L2__20_241_2e_o1)
___DEF_M_HLBL(___L3__20_241_2e_o1)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_unique_2d_triplets)
___DEF_M_HLBL(___L1_unique_2d_triplets)
___DEF_M_HLBL(___L2_unique_2d_triplets)
___DEF_M_HLBL(___L3_unique_2d_triplets)
___DEF_M_HLBL(___L4_unique_2d_triplets)
___DEF_M_HLBL(___L5_unique_2d_triplets)
___DEF_M_HLBL(___L6_unique_2d_triplets)
___DEF_M_HLBL(___L7_unique_2d_triplets)
___DEF_M_HLBL(___L8_unique_2d_triplets)
___DEF_M_HLBL(___L9_unique_2d_triplets)
___DEF_M_HLBL(___L10_unique_2d_triplets)
___DEF_M_HLBL(___L11_unique_2d_triplets)
___DEF_M_HLBL(___L12_unique_2d_triplets)
___DEF_M_HLBL(___L13_unique_2d_triplets)
___DEF_M_HLBL(___L14_unique_2d_triplets)
___DEF_M_HLBL(___L15_unique_2d_triplets)
___DEF_M_HLBL(___L16_unique_2d_triplets)
___DEF_M_HLBL(___L17_unique_2d_triplets)
___DEF_M_HLBL(___L18_unique_2d_triplets)
___DEF_M_HLBL(___L19_unique_2d_triplets)
___DEF_M_HLBL(___L20_unique_2d_triplets)
___DEF_M_HLBL(___L21_unique_2d_triplets)
___DEF_M_HLBL(___L22_unique_2d_triplets)
___DEF_M_HLBL(___L23_unique_2d_triplets)
___DEF_M_HLBL(___L24_unique_2d_triplets)
___DEF_M_HLBL(___L25_unique_2d_triplets)
___DEF_M_HLBL(___L26_unique_2d_triplets)
___DEF_M_HLBL(___L27_unique_2d_triplets)
___DEF_M_HLBL(___L28_unique_2d_triplets)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_ordered_2d_triplets)
___DEF_M_HLBL(___L1_ordered_2d_triplets)
___DEF_M_HLBL(___L2_ordered_2d_triplets)
___DEF_M_HLBL(___L3_ordered_2d_triplets)
___DEF_M_HLBL(___L4_ordered_2d_triplets)
___DEF_M_HLBL(___L5_ordered_2d_triplets)
___DEF_M_HLBL(___L6_ordered_2d_triplets)
___DEF_M_HLBL(___L7_ordered_2d_triplets)
___DEF_M_HLBL(___L8_ordered_2d_triplets)
___DEF_M_HLBL(___L9_ordered_2d_triplets)
___DEF_M_HLBL(___L10_ordered_2d_triplets)
___END_M_HLBL

___BEGIN_M_SW

#undef ___PH_PROC
#define ___PH_PROC ___H__20_241_2e_o1
#undef ___PH_LBL0
#define ___PH_LBL0 1
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0__20_241_2e_o1)
___DEF_P_HLBL(___L1__20_241_2e_o1)
___DEF_P_HLBL(___L2__20_241_2e_o1)
___DEF_P_HLBL(___L3__20_241_2e_o1)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0__20_241_2e_o1)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L__20_241_2e_o1)
   ___SET_STK(1,___R0)
   ___SET_R1(___SUB(0))
   ___SET_R0(___LBL(2))
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1__20_241_2e_o1)
   ___JUMPGLOSAFE(___SET_NARGS(1),11,___G_load)
___DEF_SLBL(2,___L2__20_241_2e_o1)
   ___SET_GLO(2,___G_unique_2d_triplets,___PRC(6))
   ___SET_GLO(1,___G_ordered_2d_triplets,___PRC(36))
   ___SET_R1(___VOID)
   ___POLL(3)
___DEF_SLBL(3,___L3__20_241_2e_o1)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_unique_2d_triplets
#undef ___PH_LBL0
#define ___PH_LBL0 6
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_unique_2d_triplets)
___DEF_P_HLBL(___L1_unique_2d_triplets)
___DEF_P_HLBL(___L2_unique_2d_triplets)
___DEF_P_HLBL(___L3_unique_2d_triplets)
___DEF_P_HLBL(___L4_unique_2d_triplets)
___DEF_P_HLBL(___L5_unique_2d_triplets)
___DEF_P_HLBL(___L6_unique_2d_triplets)
___DEF_P_HLBL(___L7_unique_2d_triplets)
___DEF_P_HLBL(___L8_unique_2d_triplets)
___DEF_P_HLBL(___L9_unique_2d_triplets)
___DEF_P_HLBL(___L10_unique_2d_triplets)
___DEF_P_HLBL(___L11_unique_2d_triplets)
___DEF_P_HLBL(___L12_unique_2d_triplets)
___DEF_P_HLBL(___L13_unique_2d_triplets)
___DEF_P_HLBL(___L14_unique_2d_triplets)
___DEF_P_HLBL(___L15_unique_2d_triplets)
___DEF_P_HLBL(___L16_unique_2d_triplets)
___DEF_P_HLBL(___L17_unique_2d_triplets)
___DEF_P_HLBL(___L18_unique_2d_triplets)
___DEF_P_HLBL(___L19_unique_2d_triplets)
___DEF_P_HLBL(___L20_unique_2d_triplets)
___DEF_P_HLBL(___L21_unique_2d_triplets)
___DEF_P_HLBL(___L22_unique_2d_triplets)
___DEF_P_HLBL(___L23_unique_2d_triplets)
___DEF_P_HLBL(___L24_unique_2d_triplets)
___DEF_P_HLBL(___L25_unique_2d_triplets)
___DEF_P_HLBL(___L26_unique_2d_triplets)
___DEF_P_HLBL(___L27_unique_2d_triplets)
___DEF_P_HLBL(___L28_unique_2d_triplets)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_unique_2d_triplets)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_unique_2d_triplets)
   ___SET_STK(1,___LBL(6))
   ___SET_STK(2,___R0)
   ___SET_R2(___R1)
   ___SET_R1(___FIX(1L))
   ___SET_R0(___LBL(4))
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_unique_2d_triplets)
   ___GOTO(___L30_unique_2d_triplets)
___DEF_SLBL(2,___L2_unique_2d_triplets)
   ___SET_R2(___R1)
   ___ADJFP(-6)
___DEF_GLBL(___L29_unique_2d_triplets)
   ___SET_R1(___FIX(1L))
   ___SET_R0(___LBL(4))
   ___ADJFP(6)
   ___POLL(3)
___DEF_SLBL(3,___L3_unique_2d_triplets)
___DEF_GLBL(___L30_unique_2d_triplets)
   ___JUMPGLOSAFE(___SET_NARGS(2),7,___G_enumerate_2d_interval)
___DEF_SLBL(4,___L4_unique_2d_triplets)
   ___SET_R2(___R1)
   ___SET_R0(___STK(-6))
   ___SET_R1(___STK(-7))
   ___POLL(5)
___DEF_SLBL(5,___L5_unique_2d_triplets)
   ___ADJFP(-8)
   ___JUMPGLOSAFE(___SET_NARGS(2),9,___G_flat_2d_map)
___DEF_SLBL(6,___L6_unique_2d_triplets)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(6,1,0,0)
   ___SET_STK(1,___ALLOC_CLO(1))
   ___BEGIN_SETUP_CLO(1,___STK(1),9)
   ___ADD_CLO_ELEM(0,___R1)
   ___END_SETUP_CLO(1)
   ___SET_STK(2,___R0)
   ___ADJFP(2)
   ___CHECK_HEAP(7,4096)
___DEF_SLBL(7,___L7_unique_2d_triplets)
   ___IF(___NOT(___EQP(___GLO(4,___G__2d_),___PRM(4,___G__2d_))))
   ___GOTO(___L31_unique_2d_triplets)
   ___END_IF
   ___IF(___NOT(___FIXNUMP(___R1)))
   ___GOTO(___L31_unique_2d_triplets)
   ___END_IF
   ___SET_R2(___FIXSUBP(___R1,___FIX(1L)))
   ___IF(___NOT(___FALSEP(___R2)))
   ___GOTO(___L29_unique_2d_triplets)
   ___END_IF
___DEF_GLBL(___L31_unique_2d_triplets)
   ___SET_R2(___FIX(1L))
   ___SET_R0(___LBL(2))
   ___ADJFP(6)
   ___POLL(8)
___DEF_SLBL(8,___L8_unique_2d_triplets)
   ___JUMPGLOSAFE(___SET_NARGS(2),4,___G__2d_)
___DEF_SLBL(9,___L9_unique_2d_triplets)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(9,1,0,0)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R4)
   ___ADJFP(3)
   ___IF(___NOT(___EQP(___GLO(4,___G__2d_),___PRM(4,___G__2d_))))
   ___GOTO(___L32_unique_2d_triplets)
   ___END_IF
   ___IF(___NOT(___FIXNUMP(___R1)))
   ___GOTO(___L32_unique_2d_triplets)
   ___END_IF
   ___SET_R1(___FIXSUBP(___R1,___FIX(1L)))
   ___IF(___NOT(___FALSEP(___R1)))
   ___GOTO(___L34_unique_2d_triplets)
   ___END_IF
   ___SET_R1(___STK(-1))
   ___SET_R2(___FIX(1L))
   ___SET_R0(___LBL(12))
   ___ADJFP(5)
   ___POLL(10)
___DEF_SLBL(10,___L10_unique_2d_triplets)
   ___GOTO(___L33_unique_2d_triplets)
___DEF_GLBL(___L32_unique_2d_triplets)
   ___SET_R2(___FIX(1L))
   ___SET_R0(___LBL(12))
   ___ADJFP(5)
   ___POLL(11)
___DEF_SLBL(11,___L11_unique_2d_triplets)
___DEF_GLBL(___L33_unique_2d_triplets)
   ___JUMPGLOSAFE(___SET_NARGS(2),4,___G__2d_)
___DEF_SLBL(12,___L12_unique_2d_triplets)
   ___ADJFP(-5)
   ___GOTO(___L35_unique_2d_triplets)
___DEF_GLBL(___L34_unique_2d_triplets)
   ___SET_STK(0,___R4)
___DEF_GLBL(___L35_unique_2d_triplets)
   ___SET_R2(___R1)
   ___SET_R1(___FIX(1L))
   ___SET_R0(___LBL(14))
   ___ADJFP(5)
   ___POLL(13)
___DEF_SLBL(13,___L13_unique_2d_triplets)
   ___JUMPGLOSAFE(___SET_NARGS(2),7,___G_enumerate_2d_interval)
___DEF_SLBL(14,___L14_unique_2d_triplets)
   ___SET_STK(-4,___ALLOC_CLO(2))
   ___BEGIN_SETUP_CLO(2,___STK(-4),26)
   ___ADD_CLO_ELEM(0,___CLO(___STK(-5),1))
   ___ADD_CLO_ELEM(1,___STK(-6))
   ___END_SETUP_CLO(2)
   ___ADJFP(-4)
   ___CHECK_HEAP(15,4096)
___DEF_SLBL(15,___L15_unique_2d_triplets)
   ___IF(___NOT(___EQP(___GLO(12,___G_map),___PRM(12,___G_map))))
   ___GOTO(___L41_unique_2d_triplets)
   ___END_IF
   ___SET_R2(___STK(0))
   ___SET_R3(___R1)
   ___SET_R0(___STK(-3))
   ___ADJFP(-4)
   ___POLL(16)
___DEF_SLBL(16,___L16_unique_2d_triplets)
   ___GOTO(___L37_unique_2d_triplets)
___DEF_GLBL(___L36_unique_2d_triplets)
   ___SET_R3(___CDR(___R3))
   ___POLL(17)
___DEF_SLBL(17,___L17_unique_2d_triplets)
___DEF_GLBL(___L37_unique_2d_triplets)
   ___IF(___PAIRP(___R3))
   ___GOTO(___L36_unique_2d_triplets)
   ___END_IF
   ___IF(___NOT(___NULLP(___R3)))
   ___GOTO(___L40_unique_2d_triplets)
   ___END_IF
   ___SET_STK(1,___R2)
   ___SET_R2(___R1)
   ___SET_R1(___STK(1))
   ___POLL(18)
___DEF_SLBL(18,___L18_unique_2d_triplets)
   ___IF(___NOT(___PAIRP(___R2)))
   ___GOTO(___L39_unique_2d_triplets)
   ___END_IF
___DEF_GLBL(___L38_unique_2d_triplets)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_R1(___CAR(___R2))
   ___SET_R0(___LBL(20))
   ___ADJFP(8)
   ___POLL(19)
___DEF_SLBL(19,___L19_unique_2d_triplets)
   ___JUMPGENSAFE(___SET_NARGS(1),___STK(-6))
___DEF_SLBL(20,___L20_unique_2d_triplets)
   ___SET_STK(-4,___R1)
   ___SET_R2(___CDR(___STK(-5)))
   ___SET_R1(___STK(-6))
   ___SET_R0(___LBL(21))
   ___IF(___PAIRP(___R2))
   ___GOTO(___L38_unique_2d_triplets)
   ___END_IF
___DEF_GLBL(___L39_unique_2d_triplets)
   ___SET_R1(___NUL)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(21,___L21_unique_2d_triplets)
   ___SET_R1(___CONS(___STK(-4),___R1))
   ___CHECK_HEAP(22,4096)
___DEF_SLBL(22,___L22_unique_2d_triplets)
   ___POLL(23)
___DEF_SLBL(23,___L23_unique_2d_triplets)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L40_unique_2d_triplets)
   ___SET_STK(1,___R2)
   ___SET_R2(___R1)
   ___SET_R1(___STK(1))
   ___ADJFP(1)
   ___POLL(24)
___DEF_SLBL(24,___L24_unique_2d_triplets)
   ___ADJFP(-1)
   ___JUMPGLOSAFE(___SET_NARGS(2),12,___G_map)
___DEF_GLBL(___L41_unique_2d_triplets)
   ___SET_R2(___R1)
   ___SET_R1(___STK(0))
   ___SET_R0(___STK(-3))
   ___POLL(25)
___DEF_SLBL(25,___L25_unique_2d_triplets)
   ___ADJFP(-4)
   ___JUMPGLOSAFE(___SET_NARGS(2),12,___G_map)
___DEF_SLBL(26,___L26_unique_2d_triplets)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(26,1,0,0)
   ___IF(___EQP(___GLO(10,___G_list),___PRM(10,___G_list)))
   ___GOTO(___L42_unique_2d_triplets)
   ___END_IF
   ___SET_R3(___R1)
   ___SET_R2(___CLO(___R4,2))
   ___SET_R1(___CLO(___R4,1))
   ___POLL(27)
___DEF_SLBL(27,___L27_unique_2d_triplets)
   ___JUMPGLOSAFE(___SET_NARGS(3),10,___G_list)
___DEF_GLBL(___L42_unique_2d_triplets)
   ___SET_R3(___CLO(___R4,2))
   ___SET_R4(___CLO(___R4,1))
   ___BEGIN_ALLOC_LIST(3,___R1)
   ___ADD_LIST_ELEM(1,___R3)
   ___ADD_LIST_ELEM(2,___R4)
   ___END_ALLOC_LIST(3)
   ___SET_R1(___GET_LIST(3))
   ___CHECK_HEAP(28,4096)
___DEF_SLBL(28,___L28_unique_2d_triplets)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_ordered_2d_triplets
#undef ___PH_LBL0
#define ___PH_LBL0 36
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4 ___D_F64(___F64V1) ___D_F64( \
___F64V2)
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_ordered_2d_triplets)
___DEF_P_HLBL(___L1_ordered_2d_triplets)
___DEF_P_HLBL(___L2_ordered_2d_triplets)
___DEF_P_HLBL(___L3_ordered_2d_triplets)
___DEF_P_HLBL(___L4_ordered_2d_triplets)
___DEF_P_HLBL(___L5_ordered_2d_triplets)
___DEF_P_HLBL(___L6_ordered_2d_triplets)
___DEF_P_HLBL(___L7_ordered_2d_triplets)
___DEF_P_HLBL(___L8_ordered_2d_triplets)
___DEF_P_HLBL(___L9_ordered_2d_triplets)
___DEF_P_HLBL(___L10_ordered_2d_triplets)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_ordered_2d_triplets)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L_ordered_2d_triplets)
   ___SET_STK(1,___ALLOC_CLO(1))
   ___BEGIN_SETUP_CLO(1,___STK(1),5)
   ___ADD_CLO_ELEM(0,___R2)
   ___END_SETUP_CLO(1)
   ___SET_STK(2,___R0)
   ___SET_R0(___LBL(3))
   ___ADJFP(8)
   ___CHECK_HEAP(1,4096)
___DEF_SLBL(1,___L1_ordered_2d_triplets)
   ___POLL(2)
___DEF_SLBL(2,___L2_ordered_2d_triplets)
   ___JUMPGLOSAFE(___SET_NARGS(1),2,___G_unique_2d_triplets)
___DEF_SLBL(3,___L3_ordered_2d_triplets)
   ___SET_R2(___R1)
   ___SET_R0(___STK(-6))
   ___SET_R1(___STK(-7))
   ___POLL(4)
___DEF_SLBL(4,___L4_ordered_2d_triplets)
   ___ADJFP(-8)
   ___JUMPGLOSAFE(___SET_NARGS(2),8,___G_filter)
___DEF_SLBL(5,___L5_ordered_2d_triplets)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(5,1,0,0)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R4)
   ___SET_R3(___R1)
   ___SET_R2(___FIX(0L))
   ___SET_R1(___GLO(3,___G__2b_))
   ___SET_R0(___LBL(7))
   ___ADJFP(8)
   ___POLL(6)
___DEF_SLBL(6,___L6_ordered_2d_triplets)
   ___JUMPGLOSAFE(___SET_NARGS(3),6,___G_accumulate)
___DEF_SLBL(7,___L7_ordered_2d_triplets)
   ___IF(___NOT(___EQP(___GLO(5,___G__3d_),___PRM(5,___G__3d_))))
   ___GOTO(___L13_ordered_2d_triplets)
   ___END_IF
   ___SET_R0(___CLO(___STK(-6),1))
   ___IF(___NOT(___FIXNUMP(___R0)))
   ___GOTO(___L11_ordered_2d_triplets)
   ___END_IF
   ___IF(___NOT(___FIXNUMP(___R1)))
   ___GOTO(___L11_ordered_2d_triplets)
   ___END_IF
   ___SET_R0(___CLO(___STK(-6),1))
   ___SET_R1(___BOOLEAN(___FIXEQ(___R1,___R0)))
   ___POLL(8)
___DEF_SLBL(8,___L8_ordered_2d_triplets)
   ___GOTO(___L12_ordered_2d_triplets)
___DEF_GLBL(___L11_ordered_2d_triplets)
   ___SET_R0(___CLO(___STK(-6),1))
   ___IF(___NOT(___FLONUMP(___R0)))
   ___GOTO(___L13_ordered_2d_triplets)
   ___END_IF
   ___IF(___NOT(___FLONUMP(___R1)))
   ___GOTO(___L13_ordered_2d_triplets)
   ___END_IF
   ___SET_R0(___CLO(___STK(-6),1))
   ___SET_F64(___F64V1,___F64UNBOX(___R1))
   ___SET_F64(___F64V2,___F64UNBOX(___R0))
   ___SET_R1(___BOOLEAN(___F64EQ(___F64V1,___F64V2)))
   ___POLL(9)
___DEF_SLBL(9,___L9_ordered_2d_triplets)
___DEF_GLBL(___L12_ordered_2d_triplets)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L13_ordered_2d_triplets)
   ___SET_R2(___CLO(___STK(-6),1))
   ___SET_R0(___STK(-7))
   ___POLL(10)
___DEF_SLBL(10,___L10_ordered_2d_triplets)
   ___ADJFP(-8)
   ___JUMPGLOSAFE(___SET_NARGS(2),5,___G__3d_)
___END_P_SW
___END_P_COD

___END_M_SW
___END_M_COD

___BEGIN_LBL
 ___DEF_LBL_INTRO(___H__20_241_2e_o1," 241.o1",___REF_FAL,4,0)
,___DEF_LBL_PROC(___H__20_241_2e_o1,0,0)
,___DEF_LBL_RET(___H__20_241_2e_o1,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H__20_241_2e_o1,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H__20_241_2e_o1,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_INTRO(___H_unique_2d_triplets,0,___REF_FAL,29,0)
,___DEF_LBL_PROC(___H_unique_2d_triplets,1,0)
,___DEF_LBL_RET(___H_unique_2d_triplets,___IFD(___RETI,8,1,0x3f03L))
,___DEF_LBL_RET(___H_unique_2d_triplets,___IFD(___RETN,5,1,0x3L))
,___DEF_LBL_RET(___H_unique_2d_triplets,___IFD(___RETI,8,1,0x3f03L))
,___DEF_LBL_RET(___H_unique_2d_triplets,___IFD(___RETN,5,1,0x3L))
,___DEF_LBL_RET(___H_unique_2d_triplets,___IFD(___RETI,8,8,0x3f01L))
,___DEF_LBL_PROC(___H_unique_2d_triplets,1,0)
,___DEF_LBL_RET(___H_unique_2d_triplets,___IFD(___RETI,2,1,0x3f3L))
,___DEF_LBL_RET(___H_unique_2d_triplets,___IFD(___RETI,8,1,0x3f03L))
,___DEF_LBL_PROC(___H_unique_2d_triplets,1,1)
,___DEF_LBL_RET(___H_unique_2d_triplets,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_RET(___H_unique_2d_triplets,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_RET(___H_unique_2d_triplets,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_unique_2d_triplets,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_RET(___H_unique_2d_triplets,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_unique_2d_triplets,___IFD(___RETI,4,0,0x3ffL))
,___DEF_LBL_RET(___H_unique_2d_triplets,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_unique_2d_triplets,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_unique_2d_triplets,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_unique_2d_triplets,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_RET(___H_unique_2d_triplets,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_unique_2d_triplets,___IFD(___RETN,5,0,0x9L))
,___DEF_LBL_RET(___H_unique_2d_triplets,___IFD(___RETI,8,0,0x3f01L))
,___DEF_LBL_RET(___H_unique_2d_triplets,___IFD(___RETI,8,0,0x3f01L))
,___DEF_LBL_RET(___H_unique_2d_triplets,___IFD(___RETI,1,4,0x3f0L))
,___DEF_LBL_RET(___H_unique_2d_triplets,___IFD(___RETI,4,4,0x3f0L))
,___DEF_LBL_PROC(___H_unique_2d_triplets,1,2)
,___DEF_LBL_RET(___H_unique_2d_triplets,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_unique_2d_triplets,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_INTRO(___H_ordered_2d_triplets,0,___REF_FAL,11,0)
,___DEF_LBL_PROC(___H_ordered_2d_triplets,2,0)
,___DEF_LBL_RET(___H_ordered_2d_triplets,___IFD(___RETI,8,1,0x3f03L))
,___DEF_LBL_RET(___H_ordered_2d_triplets,___IFD(___RETI,8,1,0x3f03L))
,___DEF_LBL_RET(___H_ordered_2d_triplets,___IFD(___RETN,5,1,0x3L))
,___DEF_LBL_RET(___H_ordered_2d_triplets,___IFD(___RETI,8,8,0x3f01L))
,___DEF_LBL_PROC(___H_ordered_2d_triplets,1,1)
,___DEF_LBL_RET(___H_ordered_2d_triplets,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_ordered_2d_triplets,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_ordered_2d_triplets,___IFD(___RETI,8,0,0x3f01L))
,___DEF_LBL_RET(___H_ordered_2d_triplets,___IFD(___RETI,8,0,0x3f01L))
,___DEF_LBL_RET(___H_ordered_2d_triplets,___IFD(___RETI,8,8,0x3f00L))
___END_LBL

___BEGIN_MOD1
___DEF_PRM(0,___G__20_241_2e_o1,1)
___END_MOD1

___BEGIN_MOD2
___END_MOD2

#endif
