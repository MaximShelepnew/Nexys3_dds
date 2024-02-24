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
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_3620187407_sub_4042748798_3965413181(char *, char *, char *, char *, char *);


static void work_a_2239630122_3212880686_p_0(char *t0)
{
    char t11[16];
    char t13[16];
    char t21[16];
    char t23[16];
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t14;
    char *t15;
    int t16;
    unsigned int t17;
    char *t18;
    char *t20;
    char *t22;
    char *t24;
    char *t25;
    int t26;
    unsigned int t27;
    unsigned char t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 568U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 4732);
    t5 = (t0 + 2592);
    t8 = (t5 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t12 = *((char **)t10);
    memcpy(t12, t2, 10U);
    xsi_driver_first_trans_fast(t5);

LAB3:    t2 = (t0 + 2524);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(55, ng0);
    t4 = (t0 + 4730);
    t9 = (t0 + 684U);
    t10 = *((char **)t9);
    t12 = ((IEEE_P_2592010699) + 2332);
    t14 = (t13 + 0U);
    t15 = (t14 + 0U);
    *((int *)t15) = 0;
    t15 = (t14 + 4U);
    *((int *)t15) = 0;
    t15 = (t14 + 8U);
    *((int *)t15) = 1;
    t16 = (0 - 0);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t15 = (t14 + 12U);
    *((unsigned int *)t15) = t17;
    t15 = (t0 + 4588U);
    t9 = xsi_base_array_concat(t9, t11, t12, (char)97, t4, t13, (char)97, t10, t15, (char)101);
    t18 = (t0 + 4731);
    t22 = ((IEEE_P_2592010699) + 2332);
    t24 = (t23 + 0U);
    t25 = (t24 + 0U);
    *((int *)t25) = 0;
    t25 = (t24 + 4U);
    *((int *)t25) = 0;
    t25 = (t24 + 8U);
    *((int *)t25) = 1;
    t26 = (0 - 0);
    t17 = (t26 * 1);
    t17 = (t17 + 1);
    t25 = (t24 + 12U);
    *((unsigned int *)t25) = t17;
    t20 = xsi_base_array_concat(t20, t21, t22, (char)97, t9, t11, (char)97, t18, t23, (char)101);
    t17 = (1U + 8U);
    t27 = (t17 + 1U);
    t28 = (10U != t27);
    if (t28 == 1)
        goto LAB8;

LAB9:    t25 = (t0 + 2592);
    t29 = (t25 + 32U);
    t30 = *((char **)t29);
    t31 = (t30 + 40U);
    t32 = *((char **)t31);
    memcpy(t32, t20, 10U);
    xsi_driver_first_trans_fast(t25);
    goto LAB3;

LAB5:    t4 = (t0 + 592U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_size_not_matching(10U, t27, 0);
    goto LAB9;

}

static void work_a_2239630122_3212880686_p_1(char *t0)
{
    char t12[16];
    char t21[16];
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    int t15;
    unsigned int t16;
    unsigned char t17;
    char *t18;
    char *t19;
    char *t22;
    char *t23;
    int t24;
    unsigned char t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;

LAB0:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 568U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 2532);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(63, ng0);
    t4 = (t0 + 1236U);
    t9 = *((char **)t4);
    t4 = (t0 + 4668U);
    t10 = (t0 + 4742);
    t13 = (t12 + 0U);
    t14 = (t13 + 0U);
    *((int *)t14) = 0;
    t14 = (t13 + 4U);
    *((int *)t14) = 10;
    t14 = (t13 + 8U);
    *((int *)t14) = 1;
    t15 = (10 - 0);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t14 = (t13 + 12U);
    *((unsigned int *)t14) = t16;
    t17 = ieee_p_3620187407_sub_4042748798_3965413181(IEEE_P_3620187407, t9, t4, t10, t12);
    if (t17 == 1)
        goto LAB11;

LAB12:    t8 = (unsigned char)0;

LAB13:    if (t8 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 2628);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t9 = (t5 + 40U);
    t10 = *((char **)t9);
    *((int *)t10) = 0;
    xsi_driver_first_trans_fast(t2);

LAB9:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 960U);
    t4 = *((char **)t2);
    t15 = *((int *)t4);
    t1 = (t15 == 10);
    if (t1 != 0)
        goto LAB14;

LAB16:
LAB15:    goto LAB3;

LAB5:    t4 = (t0 + 592U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)2);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(64, ng0);
    t23 = (t0 + 2628);
    t26 = (t23 + 32U);
    t27 = *((char **)t26);
    t28 = (t27 + 40U);
    t29 = *((char **)t28);
    *((int *)t29) = 1;
    xsi_driver_first_trans_fast(t23);
    goto LAB9;

LAB11:    t14 = (t0 + 1236U);
    t18 = *((char **)t14);
    t14 = (t0 + 4668U);
    t19 = (t0 + 4753);
    t22 = (t21 + 0U);
    t23 = (t22 + 0U);
    *((int *)t23) = 0;
    t23 = (t22 + 4U);
    *((int *)t23) = 9;
    t23 = (t22 + 8U);
    *((int *)t23) = 1;
    t24 = (9 - 0);
    t16 = (t24 * 1);
    t16 = (t16 + 1);
    t23 = (t22 + 12U);
    *((unsigned int *)t23) = t16;
    t25 = ieee_p_3620187407_sub_4042748798_3965413181(IEEE_P_3620187407, t18, t14, t19, t21);
    t8 = t25;
    goto LAB13;

LAB14:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 2628);
    t5 = (t2 + 32U);
    t9 = *((char **)t5);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    *((int *)t11) = 0;
    xsi_driver_first_trans_fast(t2);
    goto LAB15;

}

static void work_a_2239630122_3212880686_p_2(char *t0)
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
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 568U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 2540);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(78, ng0);
    t4 = (t0 + 1144U);
    t8 = *((char **)t4);
    t9 = *((int *)t8);
    t10 = (t9 == 1);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 2700);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t11 = *((char **)t8);
    *((int *)t11) = 0;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 2664);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t11 = *((char **)t8);
    *((int *)t11) = 0;
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 592U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(79, ng0);
    t4 = (t0 + 868U);
    t11 = *((char **)t4);
    t12 = *((int *)t11);
    t13 = (t12 == 1736);
    if (t13 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 868U);
    t4 = *((char **)t2);
    t9 = *((int *)t4);
    t12 = (t9 + 1);
    t2 = (t0 + 2664);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t11 = (t8 + 40U);
    t14 = *((char **)t11);
    *((int *)t14) = t12;
    xsi_driver_first_trans_fast(t2);

LAB12:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 960U);
    t4 = *((char **)t2);
    t9 = *((int *)t4);
    t1 = (t9 == 10);
    if (t1 != 0)
        goto LAB14;

LAB16:
LAB15:    goto LAB9;

LAB11:    xsi_set_current_line(80, ng0);
    t4 = (t0 + 2664);
    t14 = (t4 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    *((int *)t17) = 0;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 960U);
    t4 = *((char **)t2);
    t9 = *((int *)t4);
    t12 = (t9 + 1);
    t2 = (t0 + 2700);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t11 = (t8 + 40U);
    t14 = *((char **)t11);
    *((int *)t14) = t12;
    xsi_driver_first_trans_fast(t2);
    goto LAB12;

LAB14:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 2700);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t11 = (t8 + 40U);
    t14 = *((char **)t11);
    *((int *)t14) = 0;
    xsi_driver_first_trans_fast(t2);
    goto LAB15;

}

static void work_a_2239630122_3212880686_p_3(char *t0)
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

LAB0:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 568U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 2548);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(96, ng0);
    t4 = (t0 + 868U);
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

LAB8:    xsi_set_current_line(97, ng0);
    t4 = (t0 + 1144U);
    t11 = *((char **)t4);
    t12 = *((int *)t11);
    t13 = (t12 == 1);
    if (t13 != 0)
        goto LAB11;

LAB13:
LAB12:    goto LAB9;

LAB11:    xsi_set_current_line(98, ng0);
    t4 = (t0 + 1236U);
    t14 = *((char **)t4);
    t4 = (t0 + 960U);
    t15 = *((char **)t4);
    t16 = *((int *)t15);
    t17 = (t16 - 9);
    t18 = (t17 * -1);
    xsi_vhdl_check_range_of_index(9, 0, -1, t16);
    t19 = (1U * t18);
    t20 = (0 + t19);
    t4 = (t14 + t20);
    t21 = *((unsigned char *)t4);
    t22 = (t0 + 2736);
    t23 = (t22 + 32U);
    t24 = *((char **)t23);
    t25 = (t24 + 40U);
    t26 = *((char **)t25);
    *((unsigned char *)t26) = t21;
    xsi_driver_first_trans_fast_port(t22);
    goto LAB12;

}


extern void work_a_2239630122_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2239630122_3212880686_p_0,(void *)work_a_2239630122_3212880686_p_1,(void *)work_a_2239630122_3212880686_p_2,(void *)work_a_2239630122_3212880686_p_3};
	xsi_register_didat("work_a_2239630122_3212880686", "isim/top_modul_isim_beh.exe.sim/work/a_2239630122_3212880686.didat");
	xsi_register_executes(pe);
}
