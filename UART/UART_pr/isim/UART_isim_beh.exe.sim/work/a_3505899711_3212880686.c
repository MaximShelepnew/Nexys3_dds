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
static const char *ng0 = "//VBoxSvr/obsch_win_xp/UART/UART_pr/UART.vhd";



static void work_a_3505899711_3212880686_p_0(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    int t12;
    int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    int t18;
    int t19;

LAB0:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 568U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 2564);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(57, ng0);
    t4 = (t0 + 684U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2624);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t11 = *((char **)t8);
    *((int *)t11) = 0;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2660);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t11 = *((char **)t8);
    *((int *)t11) = 0;
    xsi_driver_first_trans_fast(t2);

LAB9:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1144U);
    t4 = *((char **)t2);
    t12 = *((int *)t4);
    t3 = (t12 == 100000);
    if (t3 == 1)
        goto LAB14;

LAB15:    t1 = (unsigned char)0;

LAB16:    if (t1 != 0)
        goto LAB11;

LAB13:
LAB12:    goto LAB3;

LAB5:    t4 = (t0 + 592U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)2);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(58, ng0);
    t4 = (t0 + 1144U);
    t11 = *((char **)t4);
    t12 = *((int *)t11);
    t13 = (t12 + 1);
    t4 = (t0 + 2624);
    t14 = (t4 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    *((int *)t17) = t13;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB11:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1236U);
    t8 = *((char **)t2);
    t18 = *((int *)t8);
    t19 = (t18 + 1);
    t2 = (t0 + 2660);
    t11 = (t2 + 32U);
    t14 = *((char **)t11);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    *((int *)t16) = t19;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2624);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t11 = *((char **)t8);
    *((int *)t11) = 0;
    xsi_driver_first_trans_fast(t2);
    goto LAB12;

LAB14:    t2 = (t0 + 1236U);
    t5 = *((char **)t2);
    t13 = *((int *)t5);
    t6 = (t13 != 3);
    t1 = t6;
    goto LAB16;

}

static void work_a_3505899711_3212880686_p_1(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    int t10;
    unsigned char t11;
    char *t12;
    int t13;
    unsigned char t14;
    char *t15;
    int t16;
    unsigned char t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 568U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 2572);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(74, ng0);
    t4 = (t0 + 1236U);
    t9 = *((char **)t4);
    t10 = *((int *)t9);
    t11 = (t10 != 3);
    if (t11 == 1)
        goto LAB11;

LAB12:    t8 = (unsigned char)0;

LAB13:    if (t8 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 2732);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t9 = (t5 + 40U);
    t12 = *((char **)t9);
    *((int *)t12) = 0;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 2696);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t9 = (t5 + 40U);
    t12 = *((char **)t9);
    *((int *)t12) = 0;
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 592U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(75, ng0);
    t4 = (t0 + 960U);
    t15 = *((char **)t4);
    t16 = *((int *)t15);
    t17 = (t16 == 1736);
    if (t17 != 0)
        goto LAB14;

LAB16:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 960U);
    t4 = *((char **)t2);
    t10 = *((int *)t4);
    t13 = (t10 + 1);
    t2 = (t0 + 2696);
    t5 = (t2 + 32U);
    t9 = *((char **)t5);
    t12 = (t9 + 40U);
    t15 = *((char **)t12);
    *((int *)t15) = t13;
    xsi_driver_first_trans_fast(t2);

LAB15:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 1052U);
    t4 = *((char **)t2);
    t10 = *((int *)t4);
    t1 = (t10 == 10);
    if (t1 != 0)
        goto LAB17;

LAB19:
LAB18:    goto LAB9;

LAB11:    t4 = (t0 + 1236U);
    t12 = *((char **)t4);
    t13 = *((int *)t12);
    t14 = (t13 != 0);
    t8 = t14;
    goto LAB13;

LAB14:    xsi_set_current_line(76, ng0);
    t4 = (t0 + 2696);
    t18 = (t4 + 32U);
    t19 = *((char **)t18);
    t20 = (t19 + 40U);
    t21 = *((char **)t20);
    *((int *)t21) = 0;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 1052U);
    t4 = *((char **)t2);
    t10 = *((int *)t4);
    t13 = (t10 + 1);
    t2 = (t0 + 2732);
    t5 = (t2 + 32U);
    t9 = *((char **)t5);
    t12 = (t9 + 40U);
    t15 = *((char **)t12);
    *((int *)t15) = t13;
    xsi_driver_first_trans_fast(t2);
    goto LAB15;

LAB17:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 2732);
    t5 = (t2 + 32U);
    t9 = *((char **)t5);
    t12 = (t9 + 40U);
    t15 = *((char **)t12);
    *((int *)t15) = 0;
    xsi_driver_first_trans_fast(t2);
    goto LAB18;

}

static void work_a_3505899711_3212880686_p_2(char *t0)
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
    int t12;
    unsigned char t13;
    char *t14;
    char *t15;
    int t16;
    int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned char t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 568U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 2580);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(92, ng0);
    t4 = (t0 + 960U);
    t8 = *((char **)t4);
    t9 = *((int *)t8);
    t10 = (t9 == 1736);
    if (t10 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 592U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)2);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(93, ng0);
    t4 = (t0 + 1236U);
    t11 = *((char **)t4);
    t12 = *((int *)t11);
    t13 = (t12 == 1);
    if (t13 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 1236U);
    t4 = *((char **)t2);
    t9 = *((int *)t4);
    t1 = (t9 == 2);
    if (t1 != 0)
        goto LAB14;

LAB16:
LAB15:
LAB12:    goto LAB9;

LAB11:    xsi_set_current_line(94, ng0);
    t4 = (t0 + 1328U);
    t14 = *((char **)t4);
    t4 = (t0 + 1052U);
    t15 = *((char **)t4);
    t16 = *((int *)t15);
    t17 = (t16 - 9);
    t18 = (t17 * -1);
    xsi_vhdl_check_range_of_index(9, 0, -1, t16);
    t19 = (1U * t18);
    t20 = (0 + t19);
    t4 = (t14 + t20);
    t21 = *((unsigned char *)t4);
    t22 = (t0 + 2768);
    t23 = (t22 + 32U);
    t24 = *((char **)t23);
    t25 = (t24 + 40U);
    t26 = *((char **)t25);
    *((unsigned char *)t26) = t21;
    xsi_driver_first_trans_fast_port(t22);
    goto LAB12;

LAB14:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 1420U);
    t5 = *((char **)t2);
    t2 = (t0 + 1052U);
    t8 = *((char **)t2);
    t12 = *((int *)t8);
    t16 = (t12 - 9);
    t18 = (t16 * -1);
    xsi_vhdl_check_range_of_index(9, 0, -1, t12);
    t19 = (1U * t18);
    t20 = (0 + t19);
    t2 = (t5 + t20);
    t3 = *((unsigned char *)t2);
    t11 = (t0 + 2768);
    t14 = (t11 + 32U);
    t15 = *((char **)t14);
    t22 = (t15 + 40U);
    t23 = *((char **)t22);
    *((unsigned char *)t23) = t3;
    xsi_driver_first_trans_fast_port(t11);
    goto LAB15;

}


extern void work_a_3505899711_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3505899711_3212880686_p_0,(void *)work_a_3505899711_3212880686_p_1,(void *)work_a_3505899711_3212880686_p_2};
	xsi_register_didat("work_a_3505899711_3212880686", "isim/UART_isim_beh.exe.sim/work/a_3505899711_3212880686.didat");
	xsi_register_executes(pe);
}
