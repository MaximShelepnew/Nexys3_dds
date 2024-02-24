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
static const char *ng0 = "//VBoxSvr/obsch_win_xp/UART/UART_pr/UART_rx.vhd";
extern char *IEEE_P_3620187407;
extern char *IEEE_P_1242562249;

int ieee_p_1242562249_sub_1657552908_1035706684(char *, char *, char *);


static void work_a_1042393148_3212880686_p_0(char *t0)
{
    char t49[16];
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    int t30;
    int t31;
    int t32;
    int t33;
    int t34;
    int t35;
    int t36;
    int t37;
    int t38;
    char *t39;
    unsigned char t40;
    unsigned char t41;
    char *t42;
    int t43;
    int t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    unsigned int t50;
    char *t51;

LAB0:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 568U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 2044);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(57, ng0);
    t4 = (t0 + 868U);
    t8 = *((char **)t4);
    t9 = *((int *)t8);
    t10 = (100000000 / 2);
    t11 = (t10 / 57600);
    if (t9 >= 0)
        goto LAB21;

LAB20:    t12 = (3 * 100000000);
    t13 = (t12 / 2);
    t14 = (t13 / 57600);
    if (t9 == t14)
        goto LAB10;

LAB22:    t15 = (5 * 100000000);
    t16 = (t15 / 2);
    t17 = (t16 / 57600);
    if (t9 == t17)
        goto LAB11;

LAB23:    t18 = (7 * 100000000);
    t19 = (t18 / 2);
    t20 = (t19 / 57600);
    if (t9 == t20)
        goto LAB12;

LAB24:    t21 = (9 * 100000000);
    t22 = (t21 / 2);
    t23 = (t22 / 57600);
    if (t9 == t23)
        goto LAB13;

LAB25:    t24 = (11 * 100000000);
    t25 = (t24 / 2);
    t26 = (t25 / 57600);
    if (t9 == t26)
        goto LAB14;

LAB26:    t27 = (13 * 100000000);
    t28 = (t27 / 2);
    t29 = (t28 / 57600);
    if (t9 == t29)
        goto LAB15;

LAB27:    t30 = (15 * 100000000);
    t31 = (t30 / 2);
    t32 = (t31 / 57600);
    if (t9 == t32)
        goto LAB16;

LAB28:    t33 = (17 * 100000000);
    t34 = (t33 / 2);
    t35 = (t34 / 57600);
    if (t9 == t35)
        goto LAB17;

LAB29:    t36 = (19 * 100000000);
    t37 = (t36 / 2);
    t38 = (t37 / 57600);
    if (t9 == t38)
        goto LAB18;

LAB30:
LAB19:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 868U);
    t4 = *((char **)t2);
    t9 = *((int *)t4);
    t10 = (t9 + 1);
    t2 = (t0 + 2088);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t39 = (t8 + 40U);
    t42 = *((char **)t39);
    *((int *)t42) = t10;
    xsi_driver_first_trans_fast(t2);

LAB8:    goto LAB3;

LAB5:    t4 = (t0 + 592U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB9:    xsi_set_current_line(59, ng0);
    t4 = (t0 + 684U);
    t39 = *((char **)t4);
    t40 = *((unsigned char *)t39);
    t41 = (t40 == (unsigned char)2);
    if (t41 != 0)
        goto LAB32;

LAB34:
LAB33:    goto LAB8;

LAB10:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 684U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 2124);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t39 = (t8 + 40U);
    t42 = *((char **)t39);
    *((unsigned char *)t42) = t1;
    xsi_driver_first_trans_delta(t2, 7U, 1, 0LL);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 868U);
    t4 = *((char **)t2);
    t9 = *((int *)t4);
    t10 = (t9 + 1);
    t2 = (t0 + 2088);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t39 = (t8 + 40U);
    t42 = *((char **)t39);
    *((int *)t42) = t10;
    xsi_driver_first_trans_fast(t2);
    goto LAB8;

LAB11:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 684U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 2124);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t39 = (t8 + 40U);
    t42 = *((char **)t39);
    *((unsigned char *)t42) = t1;
    xsi_driver_first_trans_delta(t2, 6U, 1, 0LL);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 868U);
    t4 = *((char **)t2);
    t9 = *((int *)t4);
    t10 = (t9 + 1);
    t2 = (t0 + 2088);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t39 = (t8 + 40U);
    t42 = *((char **)t39);
    *((int *)t42) = t10;
    xsi_driver_first_trans_fast(t2);
    goto LAB8;

LAB12:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 684U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 2124);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t39 = (t8 + 40U);
    t42 = *((char **)t39);
    *((unsigned char *)t42) = t1;
    xsi_driver_first_trans_delta(t2, 5U, 1, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 868U);
    t4 = *((char **)t2);
    t9 = *((int *)t4);
    t10 = (t9 + 1);
    t2 = (t0 + 2088);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t39 = (t8 + 40U);
    t42 = *((char **)t39);
    *((int *)t42) = t10;
    xsi_driver_first_trans_fast(t2);
    goto LAB8;

LAB13:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 684U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 2124);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t39 = (t8 + 40U);
    t42 = *((char **)t39);
    *((unsigned char *)t42) = t1;
    xsi_driver_first_trans_delta(t2, 4U, 1, 0LL);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 868U);
    t4 = *((char **)t2);
    t9 = *((int *)t4);
    t10 = (t9 + 1);
    t2 = (t0 + 2088);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t39 = (t8 + 40U);
    t42 = *((char **)t39);
    *((int *)t42) = t10;
    xsi_driver_first_trans_fast(t2);
    goto LAB8;

LAB14:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 684U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 2124);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t39 = (t8 + 40U);
    t42 = *((char **)t39);
    *((unsigned char *)t42) = t1;
    xsi_driver_first_trans_delta(t2, 3U, 1, 0LL);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 868U);
    t4 = *((char **)t2);
    t9 = *((int *)t4);
    t10 = (t9 + 1);
    t2 = (t0 + 2088);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t39 = (t8 + 40U);
    t42 = *((char **)t39);
    *((int *)t42) = t10;
    xsi_driver_first_trans_fast(t2);
    goto LAB8;

LAB15:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 684U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 2124);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t39 = (t8 + 40U);
    t42 = *((char **)t39);
    *((unsigned char *)t42) = t1;
    xsi_driver_first_trans_delta(t2, 2U, 1, 0LL);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 868U);
    t4 = *((char **)t2);
    t9 = *((int *)t4);
    t10 = (t9 + 1);
    t2 = (t0 + 2088);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t39 = (t8 + 40U);
    t42 = *((char **)t39);
    *((int *)t42) = t10;
    xsi_driver_first_trans_fast(t2);
    goto LAB8;

LAB16:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 684U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 2124);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t39 = (t8 + 40U);
    t42 = *((char **)t39);
    *((unsigned char *)t42) = t1;
    xsi_driver_first_trans_delta(t2, 1U, 1, 0LL);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 868U);
    t4 = *((char **)t2);
    t9 = *((int *)t4);
    t10 = (t9 + 1);
    t2 = (t0 + 2088);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t39 = (t8 + 40U);
    t42 = *((char **)t39);
    *((int *)t42) = t10;
    xsi_driver_first_trans_fast(t2);
    goto LAB8;

LAB17:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 868U);
    t4 = *((char **)t2);
    t9 = *((int *)t4);
    t10 = (t9 + 1);
    t2 = (t0 + 2088);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t39 = (t8 + 40U);
    t42 = *((char **)t39);
    *((int *)t42) = t10;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 684U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 2124);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t39 = (t8 + 40U);
    t42 = *((char **)t39);
    *((unsigned char *)t42) = t1;
    xsi_driver_first_trans_delta(t2, 0U, 1, 0LL);
    goto LAB8;

LAB18:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 2088);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t39 = *((char **)t8);
    *((int *)t39) = 0;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 960U);
    t4 = *((char **)t2);
    t2 = (t0 + 3936U);
    t5 = (t0 + 4004);
    t39 = (t49 + 0U);
    t42 = (t39 + 0U);
    *((int *)t42) = 0;
    t42 = (t39 + 4U);
    *((int *)t42) = 7;
    t42 = (t39 + 8U);
    *((int *)t42) = 1;
    t9 = (7 - 0);
    t50 = (t9 * 1);
    t50 = (t50 + 1);
    t42 = (t39 + 12U);
    *((unsigned int *)t42) = t50;
    t1 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t4, t2, t5, t49);
    if (t1 != 0)
        goto LAB35;

LAB37:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 1052U);
    t4 = *((char **)t2);
    t9 = *((int *)t4);
    t10 = (t9 * 10);
    t2 = (t0 + 960U);
    t5 = *((char **)t2);
    t2 = (t0 + 3936U);
    t11 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t5, t2);
    t12 = (t10 + t11);
    t13 = (t12 - 48);
    t8 = (t0 + 2196);
    t39 = (t8 + 32U);
    t42 = *((char **)t39);
    t45 = (t42 + 40U);
    t46 = *((char **)t45);
    *((int *)t46) = t13;
    xsi_driver_first_trans_fast(t8);

LAB36:    goto LAB8;

LAB21:    if (t9 <= t11)
        goto LAB9;
    else
        goto LAB20;

LAB31:;
LAB32:    xsi_set_current_line(59, ng0);
    t4 = (t0 + 868U);
    t42 = *((char **)t4);
    t43 = *((int *)t42);
    t44 = (t43 + 1);
    t4 = (t0 + 2088);
    t45 = (t4 + 32U);
    t46 = *((char **)t45);
    t47 = (t46 + 40U);
    t48 = *((char **)t47);
    *((int *)t48) = t44;
    xsi_driver_first_trans_fast(t4);
    goto LAB33;

LAB35:    xsi_set_current_line(87, ng0);
    t42 = (t0 + 1052U);
    t45 = *((char **)t42);
    t10 = *((int *)t45);
    t42 = (t0 + 2160);
    t46 = (t42 + 32U);
    t47 = *((char **)t46);
    t48 = (t47 + 40U);
    t51 = *((char **)t48);
    *((int *)t51) = t10;
    xsi_driver_first_trans_fast_port(t42);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 2196);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t39 = *((char **)t8);
    *((int *)t39) = 0;
    xsi_driver_first_trans_fast(t2);
    goto LAB36;

}


extern void work_a_1042393148_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1042393148_3212880686_p_0};
	xsi_register_didat("work_a_1042393148_3212880686", "isim/top_modul_isim_beh.exe.sim/work/a_1042393148_3212880686.didat");
	xsi_register_executes(pe);
}
