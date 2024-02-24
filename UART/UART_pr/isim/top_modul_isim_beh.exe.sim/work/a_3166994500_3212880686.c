/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "//VBoxSvr/obsch_win_xp/UART/UART_pr/spi_master.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );


static void work_a_3166994500_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(53, ng0);

LAB3:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 3020);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 2944);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3166994500_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(54, ng0);

LAB3:    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 3056);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 2952);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3166994500_3212880686_p_2(char *t0)
{
    unsigned char t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(58, ng0);
    t3 = (t0 + 1512U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 == 1)
        goto LAB8;

LAB9:    t2 = (unsigned char)0;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t3 = (t0 + 2960);
    *((int *)t3) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(59, ng0);
    t8 = (t0 + 684U);
    t12 = *((char **)t8);
    t8 = (t0 + 3092);
    t13 = (t8 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t12, 12U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(60, ng0);
    t3 = (t0 + 776U);
    t4 = *((char **)t3);
    t3 = (t0 + 3128);
    t8 = (t3 + 32U);
    t9 = *((char **)t8);
    t12 = (t9 + 40U);
    t13 = *((char **)t12);
    memcpy(t13, t4, 12U);
    xsi_driver_first_trans_fast(t3);
    goto LAB3;

LAB5:    t8 = (t0 + 592U);
    t9 = *((char **)t8);
    t10 = *((unsigned char *)t9);
    t11 = (t10 == (unsigned char)3);
    t1 = t11;
    goto LAB7;

LAB8:    t3 = (t0 + 568U);
    t7 = xsi_signal_has_event(t3);
    t2 = t7;
    goto LAB10;

}

static void work_a_3166994500_3212880686_p_3(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    int t15;

LAB0:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 568U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 2968);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(67, ng0);
    t4 = (t0 + 1236U);
    t8 = *((char **)t4);
    t9 = *((int *)t8);
    t10 = (t9 == 16);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 1236U);
    t4 = *((char **)t2);
    t9 = *((int *)t4);
    t15 = (t9 + 1);
    t2 = (t0 + 3164);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t11 = (t8 + 40U);
    t12 = *((char **)t11);
    *((int *)t12) = t15;
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 592U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)2);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(68, ng0);
    t4 = (t0 + 3164);
    t11 = (t4 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t14 = *((char **)t13);
    *((int *)t14) = 0;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

}

static void work_a_3166994500_3212880686_p_4(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;

LAB0:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 568U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 2976);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(79, ng0);
    t4 = (t0 + 1236U);
    t8 = *((char **)t4);
    t9 = *((int *)t8);
    if (t9 == 0)
        goto LAB9;

LAB26:    if (t9 == 1)
        goto LAB10;

LAB27:    if (t9 == 2)
        goto LAB11;

LAB28:    if (t9 == 3)
        goto LAB12;

LAB29:    if (t9 == 4)
        goto LAB13;

LAB30:    if (t9 == 5)
        goto LAB14;

LAB31:    if (t9 == 6)
        goto LAB15;

LAB32:    if (t9 == 7)
        goto LAB16;

LAB33:    if (t9 == 8)
        goto LAB17;

LAB34:    if (t9 == 9)
        goto LAB18;

LAB35:    if (t9 == 10)
        goto LAB19;

LAB36:    if (t9 == 11)
        goto LAB20;

LAB37:    if (t9 == 12)
        goto LAB21;

LAB38:    if (t9 == 13)
        goto LAB22;

LAB39:    if (t9 == 14)
        goto LAB23;

LAB40:    if (t9 == 15)
        goto LAB24;

LAB41:
LAB25:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 3200);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(114, ng0);
    t2 = (t0 + 3236);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(115, ng0);
    t2 = (t0 + 3272);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);

LAB8:    goto LAB3;

LAB5:    t4 = (t0 + 592U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB9:    xsi_set_current_line(80, ng0);
    t4 = (t0 + 3200);
    t10 = (t4 + 32U);
    t11 = *((char **)t10);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 3236);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 3272);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB8;

LAB10:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 3200);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 3236);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB8;

LAB11:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 3200);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 3236);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB8;

LAB12:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 3200);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 3236);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB8;

LAB13:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 1328U);
    t4 = *((char **)t2);
    t9 = (11 - 11);
    t14 = (t9 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t2 = (t4 + t16);
    t1 = *((unsigned char *)t2);
    t3 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t1);
    t5 = (t0 + 3200);
    t8 = (t5 + 32U);
    t10 = *((char **)t8);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t3;
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 1420U);
    t4 = *((char **)t2);
    t9 = (11 - 11);
    t14 = (t9 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t2 = (t4 + t16);
    t1 = *((unsigned char *)t2);
    t3 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t1);
    t5 = (t0 + 3236);
    t8 = (t5 + 32U);
    t10 = *((char **)t8);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t3;
    xsi_driver_first_trans_fast_port(t5);
    goto LAB8;

LAB14:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 1328U);
    t4 = *((char **)t2);
    t9 = (10 - 11);
    t14 = (t9 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t2 = (t4 + t16);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 3200);
    t8 = (t5 + 32U);
    t10 = *((char **)t8);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 1420U);
    t4 = *((char **)t2);
    t9 = (10 - 11);
    t14 = (t9 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t2 = (t4 + t16);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 3236);
    t8 = (t5 + 32U);
    t10 = *((char **)t8);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_fast_port(t5);
    goto LAB8;

LAB15:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 1328U);
    t4 = *((char **)t2);
    t9 = (9 - 11);
    t14 = (t9 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t2 = (t4 + t16);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 3200);
    t8 = (t5 + 32U);
    t10 = *((char **)t8);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 1420U);
    t4 = *((char **)t2);
    t9 = (9 - 11);
    t14 = (t9 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t2 = (t4 + t16);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 3236);
    t8 = (t5 + 32U);
    t10 = *((char **)t8);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_fast_port(t5);
    goto LAB8;

LAB16:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 1328U);
    t4 = *((char **)t2);
    t9 = (8 - 11);
    t14 = (t9 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t2 = (t4 + t16);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 3200);
    t8 = (t5 + 32U);
    t10 = *((char **)t8);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 1420U);
    t4 = *((char **)t2);
    t9 = (8 - 11);
    t14 = (t9 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t2 = (t4 + t16);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 3236);
    t8 = (t5 + 32U);
    t10 = *((char **)t8);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_fast_port(t5);
    goto LAB8;

LAB17:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 1328U);
    t4 = *((char **)t2);
    t9 = (7 - 11);
    t14 = (t9 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t2 = (t4 + t16);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 3200);
    t8 = (t5 + 32U);
    t10 = *((char **)t8);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 1420U);
    t4 = *((char **)t2);
    t9 = (7 - 11);
    t14 = (t9 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t2 = (t4 + t16);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 3236);
    t8 = (t5 + 32U);
    t10 = *((char **)t8);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_fast_port(t5);
    goto LAB8;

LAB18:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 1328U);
    t4 = *((char **)t2);
    t9 = (6 - 11);
    t14 = (t9 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t2 = (t4 + t16);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 3200);
    t8 = (t5 + 32U);
    t10 = *((char **)t8);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 1420U);
    t4 = *((char **)t2);
    t9 = (6 - 11);
    t14 = (t9 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t2 = (t4 + t16);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 3236);
    t8 = (t5 + 32U);
    t10 = *((char **)t8);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_fast_port(t5);
    goto LAB8;

LAB19:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 1328U);
    t4 = *((char **)t2);
    t9 = (5 - 11);
    t14 = (t9 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t2 = (t4 + t16);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 3200);
    t8 = (t5 + 32U);
    t10 = *((char **)t8);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 1420U);
    t4 = *((char **)t2);
    t9 = (5 - 11);
    t14 = (t9 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t2 = (t4 + t16);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 3236);
    t8 = (t5 + 32U);
    t10 = *((char **)t8);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_fast_port(t5);
    goto LAB8;

LAB20:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 1328U);
    t4 = *((char **)t2);
    t9 = (4 - 11);
    t14 = (t9 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t2 = (t4 + t16);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 3200);
    t8 = (t5 + 32U);
    t10 = *((char **)t8);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(104, ng0);
    t2 = (t0 + 1420U);
    t4 = *((char **)t2);
    t9 = (4 - 11);
    t14 = (t9 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t2 = (t4 + t16);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 3236);
    t8 = (t5 + 32U);
    t10 = *((char **)t8);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_fast_port(t5);
    goto LAB8;

LAB21:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 1328U);
    t4 = *((char **)t2);
    t9 = (3 - 11);
    t14 = (t9 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t2 = (t4 + t16);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 3200);
    t8 = (t5 + 32U);
    t10 = *((char **)t8);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 1420U);
    t4 = *((char **)t2);
    t9 = (3 - 11);
    t14 = (t9 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t2 = (t4 + t16);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 3236);
    t8 = (t5 + 32U);
    t10 = *((char **)t8);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_fast_port(t5);
    goto LAB8;

LAB22:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 1328U);
    t4 = *((char **)t2);
    t9 = (2 - 11);
    t14 = (t9 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t2 = (t4 + t16);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 3200);
    t8 = (t5 + 32U);
    t10 = *((char **)t8);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(108, ng0);
    t2 = (t0 + 1420U);
    t4 = *((char **)t2);
    t9 = (2 - 11);
    t14 = (t9 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t2 = (t4 + t16);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 3236);
    t8 = (t5 + 32U);
    t10 = *((char **)t8);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_fast_port(t5);
    goto LAB8;

LAB23:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 1328U);
    t4 = *((char **)t2);
    t9 = (1 - 11);
    t14 = (t9 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t2 = (t4 + t16);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 3200);
    t8 = (t5 + 32U);
    t10 = *((char **)t8);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 1420U);
    t4 = *((char **)t2);
    t9 = (1 - 11);
    t14 = (t9 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t2 = (t4 + t16);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 3236);
    t8 = (t5 + 32U);
    t10 = *((char **)t8);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_fast_port(t5);
    goto LAB8;

LAB24:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 1328U);
    t4 = *((char **)t2);
    t9 = (0 - 11);
    t14 = (t9 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t2 = (t4 + t16);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 3200);
    t8 = (t5 + 32U);
    t10 = *((char **)t8);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(112, ng0);
    t2 = (t0 + 1420U);
    t4 = *((char **)t2);
    t9 = (0 - 11);
    t14 = (t9 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t2 = (t4 + t16);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 3236);
    t8 = (t5 + 32U);
    t10 = *((char **)t8);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_fast_port(t5);
    goto LAB8;

LAB42:;
}


extern void work_a_3166994500_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3166994500_3212880686_p_0,(void *)work_a_3166994500_3212880686_p_1,(void *)work_a_3166994500_3212880686_p_2,(void *)work_a_3166994500_3212880686_p_3,(void *)work_a_3166994500_3212880686_p_4};
	xsi_register_didat("work_a_3166994500_3212880686", "isim/top_modul_isim_beh.exe.sim/work/a_3166994500_3212880686.didat");
	xsi_register_executes(pe);
}
