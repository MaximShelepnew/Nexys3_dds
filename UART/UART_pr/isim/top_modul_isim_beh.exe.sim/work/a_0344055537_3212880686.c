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
static const char *ng0 = "//VBoxSvr/obsch_win_xp/UART/UART_pr/Display7seg.vhd";
extern char *IEEE_P_1242562249;
static const char *ng2 = "rem 0 asked for.  Divide by zero error.";

int ieee_p_1242562249_sub_1657552908_1035706684(char *, char *, char *);


static void work_a_0344055537_3212880686_p_0(char *t0)
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

LAB0:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 568U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 2840);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(64, ng0);
    t4 = (t0 + 1144U);
    t8 = *((char **)t4);
    t9 = *((int *)t8);
    t10 = (t9 == 3);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1144U);
    t4 = *((char **)t2);
    t9 = *((int *)t4);
    t15 = (t9 + 1);
    t2 = (t0 + 2900);
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
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(65, ng0);
    t4 = (t0 + 2900);
    t11 = (t4 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t14 = *((char **)t13);
    *((int *)t14) = 0;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

}

static void work_a_0344055537_3212880686_p_1(char *t0)
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
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    int t21;

LAB0:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 568U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 2848);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(75, ng0);
    t4 = (t0 + 1236U);
    t8 = *((char **)t4);
    t9 = *((int *)t8);
    t10 = (t9 == 100000);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 776U);
    t4 = *((char **)t2);
    t9 = (0 - 4);
    t18 = (t9 * -1);
    t19 = (1U * t18);
    t20 = (0 + t19);
    t2 = (t4 + t20);
    t1 = *((unsigned char *)t2);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 776U);
    t4 = *((char **)t2);
    t9 = (0 - 4);
    t18 = (t9 * -1);
    t19 = (1U * t18);
    t20 = (0 + t19);
    t2 = (t4 + t20);
    t3 = *((unsigned char *)t2);
    t6 = (t3 == (unsigned char)2);
    if (t6 == 1)
        goto LAB17;

LAB18:    t1 = (unsigned char)0;

LAB19:    if (t1 != 0)
        goto LAB14;

LAB16:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 2972);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t11 = *((char **)t8);
    *((int *)t11) = 0;
    xsi_driver_first_trans_fast(t2);

LAB15:
LAB12:
LAB9:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 1328U);
    t4 = *((char **)t2);
    t9 = *((int *)t4);
    t1 = (t9 == 5000);
    if (t1 != 0)
        goto LAB20;

LAB22:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 776U);
    t4 = *((char **)t2);
    t9 = (1 - 4);
    t18 = (t9 * -1);
    t19 = (1U * t18);
    t20 = (0 + t19);
    t2 = (t4 + t20);
    t1 = *((unsigned char *)t2);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB23;

LAB25:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 3008);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t11 = *((char **)t8);
    *((int *)t11) = 0;
    xsi_driver_first_trans_fast(t2);

LAB24:
LAB21:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 1420U);
    t4 = *((char **)t2);
    t9 = *((int *)t4);
    t1 = (t9 == 5000);
    if (t1 != 0)
        goto LAB26;

LAB28:
LAB27:    xsi_set_current_line(110, ng0);
    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t9 = *((int *)t4);
    t1 = (t9 == 5000);
    if (t1 != 0)
        goto LAB29;

LAB31:    xsi_set_current_line(114, ng0);
    t2 = (t0 + 776U);
    t4 = *((char **)t2);
    t9 = (3 - 4);
    t18 = (t9 * -1);
    t19 = (1U * t18);
    t20 = (0 + t19);
    t2 = (t4 + t20);
    t1 = *((unsigned char *)t2);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB32;

LAB34:    xsi_set_current_line(116, ng0);
    t2 = (t0 + 3080);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t11 = *((char **)t8);
    *((int *)t11) = 0;
    xsi_driver_first_trans_fast(t2);

LAB33:
LAB30:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 1604U);
    t4 = *((char **)t2);
    t9 = *((int *)t4);
    t1 = (t9 == 5000);
    if (t1 != 0)
        goto LAB35;

LAB37:    xsi_set_current_line(124, ng0);
    t2 = (t0 + 776U);
    t4 = *((char **)t2);
    t9 = (4 - 4);
    t18 = (t9 * -1);
    t19 = (1U * t18);
    t20 = (0 + t19);
    t2 = (t4 + t20);
    t1 = *((unsigned char *)t2);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB38;

LAB40:    xsi_set_current_line(126, ng0);
    t2 = (t0 + 3116);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t11 = *((char **)t8);
    *((int *)t11) = 0;
    xsi_driver_first_trans_fast(t2);

LAB39:
LAB36:    goto LAB3;

LAB5:    t4 = (t0 + 592U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(76, ng0);
    t4 = (t0 + 684U);
    t11 = *((char **)t4);
    t4 = (t0 + 5980U);
    t12 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t11, t4);
    t13 = (t0 + 2936);
    t14 = (t13 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    *((int *)t17) = t12;
    xsi_driver_first_trans_fast(t13);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 2972);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t11 = *((char **)t8);
    *((int *)t11) = 0;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB11:    xsi_set_current_line(80, ng0);
    t5 = (t0 + 1236U);
    t8 = *((char **)t5);
    t12 = *((int *)t8);
    t21 = (t12 + 1);
    t5 = (t0 + 2972);
    t11 = (t5 + 32U);
    t13 = *((char **)t11);
    t14 = (t13 + 40U);
    t15 = *((char **)t14);
    *((int *)t15) = t21;
    xsi_driver_first_trans_fast(t5);
    goto LAB12;

LAB14:    xsi_set_current_line(83, ng0);
    t5 = (t0 + 684U);
    t11 = *((char **)t5);
    t5 = (t0 + 5980U);
    t21 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t11, t5);
    t13 = (t0 + 2936);
    t14 = (t13 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    *((int *)t17) = t21;
    xsi_driver_first_trans_fast(t13);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 2972);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t11 = *((char **)t8);
    *((int *)t11) = 0;
    xsi_driver_first_trans_fast(t2);
    goto LAB15;

LAB17:    t5 = (t0 + 1236U);
    t8 = *((char **)t5);
    t12 = *((int *)t8);
    t7 = (t12 > 0);
    t1 = t7;
    goto LAB19;

LAB20:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 1696U);
    t5 = *((char **)t2);
    t12 = *((int *)t5);
    t21 = (t12 * 2);
    t2 = (t0 + 2936);
    t8 = (t2 + 32U);
    t11 = *((char **)t8);
    t13 = (t11 + 40U);
    t14 = *((char **)t13);
    *((int *)t14) = t21;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 3008);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t11 = *((char **)t8);
    *((int *)t11) = 0;
    xsi_driver_first_trans_fast(t2);
    goto LAB21;

LAB23:    xsi_set_current_line(95, ng0);
    t5 = (t0 + 1328U);
    t8 = *((char **)t5);
    t12 = *((int *)t8);
    t21 = (t12 + 1);
    t5 = (t0 + 3008);
    t11 = (t5 + 32U);
    t13 = *((char **)t11);
    t14 = (t13 + 40U);
    t15 = *((char **)t14);
    *((int *)t15) = t21;
    xsi_driver_first_trans_fast(t5);
    goto LAB24;

LAB26:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 1696U);
    t5 = *((char **)t2);
    t12 = *((int *)t5);
    t21 = (t12 - 1);
    t2 = (t0 + 2936);
    t8 = (t2 + 32U);
    t11 = *((char **)t8);
    t13 = (t11 + 40U);
    t14 = *((char **)t13);
    *((int *)t14) = t21;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 3044);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t11 = *((char **)t8);
    *((int *)t11) = 0;
    xsi_driver_first_trans_fast(t2);
    goto LAB27;

LAB29:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 1696U);
    t5 = *((char **)t2);
    t12 = *((int *)t5);
    t21 = (t12 / 2);
    t2 = (t0 + 2936);
    t8 = (t2 + 32U);
    t11 = *((char **)t8);
    t13 = (t11 + 40U);
    t14 = *((char **)t13);
    *((int *)t14) = t21;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(112, ng0);
    t2 = (t0 + 3080);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t11 = *((char **)t8);
    *((int *)t11) = 0;
    xsi_driver_first_trans_fast(t2);
    goto LAB30;

LAB32:    xsi_set_current_line(115, ng0);
    t5 = (t0 + 1512U);
    t8 = *((char **)t5);
    t12 = *((int *)t8);
    t21 = (t12 + 1);
    t5 = (t0 + 3080);
    t11 = (t5 + 32U);
    t13 = *((char **)t11);
    t14 = (t13 + 40U);
    t15 = *((char **)t14);
    *((int *)t15) = t21;
    xsi_driver_first_trans_fast(t5);
    goto LAB33;

LAB35:    xsi_set_current_line(121, ng0);
    t2 = (t0 + 2936);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t11 = (t8 + 40U);
    t13 = *((char **)t11);
    *((int *)t13) = 0;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(122, ng0);
    t2 = (t0 + 3116);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t11 = *((char **)t8);
    *((int *)t11) = 0;
    xsi_driver_first_trans_fast(t2);
    goto LAB36;

LAB38:    xsi_set_current_line(125, ng0);
    t5 = (t0 + 1604U);
    t8 = *((char **)t5);
    t12 = *((int *)t8);
    t21 = (t12 + 1);
    t5 = (t0 + 3116);
    t11 = (t5 + 32U);
    t13 = *((char **)t11);
    t14 = (t13 + 40U);
    t15 = *((char **)t14);
    *((int *)t15) = t21;
    xsi_driver_first_trans_fast(t5);
    goto LAB39;

}

static void work_a_0344055537_3212880686_p_2(char *t0)
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
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    char *t22;

LAB0:    xsi_set_current_line(135, ng0);
    t2 = (t0 + 568U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 2856);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(136, ng0);
    t4 = (t0 + 1696U);
    t8 = *((char **)t4);
    t9 = *((int *)t8);
    t4 = (t0 + 3152);
    t10 = (t4 + 32U);
    t11 = *((char **)t10);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    *((int *)t13) = t9;
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(137, ng0);
    t2 = (t0 + 1144U);
    t4 = *((char **)t2);
    t9 = *((int *)t4);
    if (t9 == 0)
        goto LAB9;

LAB13:    if (t9 == 1)
        goto LAB10;

LAB14:    if (t9 == 2)
        goto LAB11;

LAB15:
LAB12:    xsi_set_current_line(183, ng0);
    t2 = (t0 + 6500);
    t5 = (t0 + 3188);
    t8 = (t5 + 32U);
    t10 = *((char **)t8);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 4U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(184, ng0);
    t2 = (t0 + 1696U);
    t4 = *((char **)t2);
    t9 = *((int *)t4);
    if (10000 == 0)
        goto LAB118;

LAB119:    t14 = abs(t9);
    t15 = (t14 % 10000);
    if (t9 < 0)
        goto LAB120;

LAB121:    t2 = (t0 + 1696U);
    t5 = *((char **)t2);
    t17 = *((int *)t5);
    if (1000 == 0)
        goto LAB122;

LAB123:    t18 = abs(t17);
    t19 = (t18 % 1000);
    if (t17 < 0)
        goto LAB124;

LAB125:    t21 = (t15 - t19);
    if (t21 == 0)
        goto LAB107;

LAB126:    if (t21 == 1000)
        goto LAB108;

LAB127:    if (t21 == 2000)
        goto LAB109;

LAB128:    if (t21 == 3000)
        goto LAB110;

LAB129:    if (t21 == 4000)
        goto LAB111;

LAB130:    if (t21 == 5000)
        goto LAB112;

LAB131:    if (t21 == 6000)
        goto LAB113;

LAB132:    if (t21 == 7000)
        goto LAB114;

LAB133:    if (t21 == 8000)
        goto LAB115;

LAB134:    if (t21 == 9000)
        goto LAB116;

LAB135:
LAB117:    xsi_set_current_line(196, ng0);
    t2 = (t0 + 6584);
    t5 = (t0 + 3224);
    t8 = (t5 + 32U);
    t10 = *((char **)t8);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);

LAB106:
LAB8:    goto LAB3;

LAB5:    t4 = (t0 + 592U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)2);
    t1 = t7;
    goto LAB7;

LAB9:    xsi_set_current_line(138, ng0);
    t2 = (t0 + 6224);
    t8 = (t0 + 3188);
    t10 = (t8 + 32U);
    t11 = *((char **)t10);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    memcpy(t13, t2, 4U);
    xsi_driver_first_trans_fast_port(t8);
    xsi_set_current_line(139, ng0);
    t2 = (t0 + 1696U);
    t4 = *((char **)t2);
    t9 = *((int *)t4);
    if (10 == 0)
        goto LAB29;

LAB30:    t14 = abs(t9);
    t15 = (t14 % 10);
    if (t9 < 0)
        goto LAB31;

LAB32:    if (t15 == 0)
        goto LAB18;

LAB33:    if (t15 == 1)
        goto LAB19;

LAB34:    if (t15 == 2)
        goto LAB20;

LAB35:    if (t15 == 3)
        goto LAB21;

LAB36:    if (t15 == 4)
        goto LAB22;

LAB37:    if (t15 == 5)
        goto LAB23;

LAB38:    if (t15 == 6)
        goto LAB24;

LAB39:    if (t15 == 7)
        goto LAB25;

LAB40:    if (t15 == 8)
        goto LAB26;

LAB41:    if (t15 == 9)
        goto LAB27;

LAB42:
LAB28:    xsi_set_current_line(151, ng0);
    t2 = (t0 + 6308);
    t5 = (t0 + 3224);
    t8 = (t5 + 32U);
    t10 = *((char **)t8);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);

LAB17:    goto LAB8;

LAB10:    xsi_set_current_line(153, ng0);
    t2 = (t0 + 6316);
    t5 = (t0 + 3188);
    t8 = (t5 + 32U);
    t10 = *((char **)t8);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 4U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(154, ng0);
    t2 = (t0 + 1696U);
    t4 = *((char **)t2);
    t9 = *((int *)t4);
    if (100 == 0)
        goto LAB56;

LAB57:    t14 = abs(t9);
    t15 = (t14 % 100);
    if (t9 < 0)
        goto LAB58;

LAB59:    t2 = (t0 + 1696U);
    t5 = *((char **)t2);
    t17 = *((int *)t5);
    if (10 == 0)
        goto LAB60;

LAB61:    t18 = abs(t17);
    t19 = (t18 % 10);
    if (t17 < 0)
        goto LAB62;

LAB63:    t21 = (t15 - t19);
    if (t21 == 0)
        goto LAB45;

LAB64:    if (t21 == 10)
        goto LAB46;

LAB65:    if (t21 == 20)
        goto LAB47;

LAB66:    if (t21 == 30)
        goto LAB48;

LAB67:    if (t21 == 40)
        goto LAB49;

LAB68:    if (t21 == 50)
        goto LAB50;

LAB69:    if (t21 == 60)
        goto LAB51;

LAB70:    if (t21 == 70)
        goto LAB52;

LAB71:    if (t21 == 80)
        goto LAB53;

LAB72:    if (t21 == 90)
        goto LAB54;

LAB73:
LAB55:    xsi_set_current_line(166, ng0);
    t2 = (t0 + 6400);
    t5 = (t0 + 3224);
    t8 = (t5 + 32U);
    t10 = *((char **)t8);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);

LAB44:    goto LAB8;

LAB11:    xsi_set_current_line(168, ng0);
    t2 = (t0 + 6408);
    t5 = (t0 + 3188);
    t8 = (t5 + 32U);
    t10 = *((char **)t8);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 4U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(169, ng0);
    t2 = (t0 + 1696U);
    t4 = *((char **)t2);
    t9 = *((int *)t4);
    if (1000 == 0)
        goto LAB87;

LAB88:    t14 = abs(t9);
    t15 = (t14 % 1000);
    if (t9 < 0)
        goto LAB89;

LAB90:    t2 = (t0 + 1696U);
    t5 = *((char **)t2);
    t17 = *((int *)t5);
    if (100 == 0)
        goto LAB91;

LAB92:    t18 = abs(t17);
    t19 = (t18 % 100);
    if (t17 < 0)
        goto LAB93;

LAB94:    t21 = (t15 - t19);
    if (t21 == 0)
        goto LAB76;

LAB95:    if (t21 == 100)
        goto LAB77;

LAB96:    if (t21 == 200)
        goto LAB78;

LAB97:    if (t21 == 300)
        goto LAB79;

LAB98:    if (t21 == 400)
        goto LAB80;

LAB99:    if (t21 == 500)
        goto LAB81;

LAB100:    if (t21 == 600)
        goto LAB82;

LAB101:    if (t21 == 700)
        goto LAB83;

LAB102:    if (t21 == 800)
        goto LAB84;

LAB103:    if (t21 == 900)
        goto LAB85;

LAB104:
LAB86:    xsi_set_current_line(181, ng0);
    t2 = (t0 + 6492);
    t5 = (t0 + 3224);
    t8 = (t5 + 32U);
    t10 = *((char **)t8);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);

LAB75:    goto LAB8;

LAB16:;
LAB18:    xsi_set_current_line(141, ng0);
    t2 = (t0 + 6228);
    t8 = (t0 + 3224);
    t10 = (t8 + 32U);
    t11 = *((char **)t10);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    memcpy(t13, t2, 8U);
    xsi_driver_first_trans_fast_port(t8);
    goto LAB17;

LAB19:    xsi_set_current_line(142, ng0);
    t2 = (t0 + 6236);
    t5 = (t0 + 3224);
    t8 = (t5 + 32U);
    t10 = *((char **)t8);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB17;

LAB20:    xsi_set_current_line(143, ng0);
    t2 = (t0 + 6244);
    t5 = (t0 + 3224);
    t8 = (t5 + 32U);
    t10 = *((char **)t8);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB17;

LAB21:    xsi_set_current_line(144, ng0);
    t2 = (t0 + 6252);
    t5 = (t0 + 3224);
    t8 = (t5 + 32U);
    t10 = *((char **)t8);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB17;

LAB22:    xsi_set_current_line(145, ng0);
    t2 = (t0 + 6260);
    t5 = (t0 + 3224);
    t8 = (t5 + 32U);
    t10 = *((char **)t8);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB17;

LAB23:    xsi_set_current_line(146, ng0);
    t2 = (t0 + 6268);
    t5 = (t0 + 3224);
    t8 = (t5 + 32U);
    t10 = *((char **)t8);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB17;

LAB24:    xsi_set_current_line(147, ng0);
    t2 = (t0 + 6276);
    t5 = (t0 + 3224);
    t8 = (t5 + 32U);
    t10 = *((char **)t8);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB17;

LAB25:    xsi_set_current_line(148, ng0);
    t2 = (t0 + 6284);
    t5 = (t0 + 3224);
    t8 = (t5 + 32U);
    t10 = *((char **)t8);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB17;

LAB26:    xsi_set_current_line(149, ng0);
    t2 = (t0 + 6292);
    t5 = (t0 + 3224);
    t8 = (t5 + 32U);
    t10 = *((char **)t8);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB17;

LAB27:    xsi_set_current_line(150, ng0);
    t2 = (t0 + 6300);
    t5 = (t0 + 3224);
    t8 = (t5 + 32U);
    t10 = *((char **)t8);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB17;

LAB29:    xsi_error(ng2);
    goto LAB30;

LAB31:    t16 = (-(t15));
    t15 = t16;
    goto LAB32;

LAB43:;
LAB45:    xsi_set_current_line(156, ng0);
    t2 = (t0 + 6320);
    t10 = (t0 + 3224);
    t11 = (t10 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t22 = *((char **)t13);
    memcpy(t22, t2, 8U);
    xsi_driver_first_trans_fast_port(t10);
    goto LAB44;

LAB46:    xsi_set_current_line(157, ng0);
    t2 = (t0 + 6328);
    t5 = (t0 + 3224);
    t8 = (t5 + 32U);
    t10 = *((char **)t8);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB44;

LAB47:    xsi_set_current_line(158, ng0);
    t2 = (t0 + 6336);
    t5 = (t0 + 3224);
    t8 = (t5 + 32U);
    t10 = *((char **)t8);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB44;

LAB48:    xsi_set_current_line(159, ng0);
    t2 = (t0 + 6344);
    t5 = (t0 + 3224);
    t8 = (t5 + 32U);
    t10 = *((char **)t8);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB44;

LAB49:    xsi_set_current_line(160, ng0);
    t2 = (t0 + 6352);
    t5 = (t0 + 3224);
    t8 = (t5 + 32U);
    t10 = *((char **)t8);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB44;

LAB50:    xsi_set_current_line(161, ng0);
    t2 = (t0 + 6360);
    t5 = (t0 + 3224);
    t8 = (t5 + 32U);
    t10 = *((char **)t8);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB44;

LAB51:    xsi_set_current_line(162, ng0);
    t2 = (t0 + 6368);
    t5 = (t0 + 3224);
    t8 = (t5 + 32U);
    t10 = *((char **)t8);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB44;

LAB52:    xsi_set_current_line(163, ng0);
    t2 = (t0 + 6376);
    t5 = (t0 + 3224);
    t8 = (t5 + 32U);
    t10 = *((char **)t8);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB44;

LAB53:    xsi_set_current_line(164, ng0);
    t2 = (t0 + 6384);
    t5 = (t0 + 3224);
    t8 = (t5 + 32U);
    t10 = *((char **)t8);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB44;

LAB54:    xsi_set_current_line(165, ng0);
    t2 = (t0 + 6392);
    t5 = (t0 + 3224);
    t8 = (t5 + 32U);
    t10 = *((char **)t8);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB44;

LAB56:    xsi_error(ng2);
    goto LAB57;

LAB58:    t16 = (-(t15));
    t15 = t16;
    goto LAB59;

LAB60:    xsi_error(ng2);
    goto LAB61;

LAB62:    t20 = (-(t19));
    t19 = t20;
    goto LAB63;

LAB74:;
LAB76:    xsi_set_current_line(171, ng0);
    t2 = (t0 + 6412);
    t10 = (t0 + 3224);
    t11 = (t10 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t22 = *((char **)t13);
    memcpy(t22, t2, 8U);
    xsi_driver_first_trans_fast_port(t10);
    goto LAB75;

LAB77:    xsi_set_current_line(172, ng0);
    t2 = (t0 + 6420);
    t5 = (t0 + 3224);
    t8 = (t5 + 32U);
    t10 = *((char **)t8);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB75;

LAB78:    xsi_set_current_line(173, ng0);
    t2 = (t0 + 6428);
    t5 = (t0 + 3224);
    t8 = (t5 + 32U);
    t10 = *((char **)t8);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB75;

LAB79:    xsi_set_current_line(174, ng0);
    t2 = (t0 + 6436);
    t5 = (t0 + 3224);
    t8 = (t5 + 32U);
    t10 = *((char **)t8);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB75;

LAB80:    xsi_set_current_line(175, ng0);
    t2 = (t0 + 6444);
    t5 = (t0 + 3224);
    t8 = (t5 + 32U);
    t10 = *((char **)t8);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB75;

LAB81:    xsi_set_current_line(176, ng0);
    t2 = (t0 + 6452);
    t5 = (t0 + 3224);
    t8 = (t5 + 32U);
    t10 = *((char **)t8);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB75;

LAB82:    xsi_set_current_line(177, ng0);
    t2 = (t0 + 6460);
    t5 = (t0 + 3224);
    t8 = (t5 + 32U);
    t10 = *((char **)t8);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB75;

LAB83:    xsi_set_current_line(178, ng0);
    t2 = (t0 + 6468);
    t5 = (t0 + 3224);
    t8 = (t5 + 32U);
    t10 = *((char **)t8);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB75;

LAB84:    xsi_set_current_line(179, ng0);
    t2 = (t0 + 6476);
    t5 = (t0 + 3224);
    t8 = (t5 + 32U);
    t10 = *((char **)t8);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB75;

LAB85:    xsi_set_current_line(180, ng0);
    t2 = (t0 + 6484);
    t5 = (t0 + 3224);
    t8 = (t5 + 32U);
    t10 = *((char **)t8);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB75;

LAB87:    xsi_error(ng2);
    goto LAB88;

LAB89:    t16 = (-(t15));
    t15 = t16;
    goto LAB90;

LAB91:    xsi_error(ng2);
    goto LAB92;

LAB93:    t20 = (-(t19));
    t19 = t20;
    goto LAB94;

LAB105:;
LAB107:    xsi_set_current_line(186, ng0);
    t2 = (t0 + 6504);
    t10 = (t0 + 3224);
    t11 = (t10 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t22 = *((char **)t13);
    memcpy(t22, t2, 8U);
    xsi_driver_first_trans_fast_port(t10);
    goto LAB106;

LAB108:    xsi_set_current_line(187, ng0);
    t2 = (t0 + 6512);
    t5 = (t0 + 3224);
    t8 = (t5 + 32U);
    t10 = *((char **)t8);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB106;

LAB109:    xsi_set_current_line(188, ng0);
    t2 = (t0 + 6520);
    t5 = (t0 + 3224);
    t8 = (t5 + 32U);
    t10 = *((char **)t8);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB106;

LAB110:    xsi_set_current_line(189, ng0);
    t2 = (t0 + 6528);
    t5 = (t0 + 3224);
    t8 = (t5 + 32U);
    t10 = *((char **)t8);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB106;

LAB111:    xsi_set_current_line(190, ng0);
    t2 = (t0 + 6536);
    t5 = (t0 + 3224);
    t8 = (t5 + 32U);
    t10 = *((char **)t8);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB106;

LAB112:    xsi_set_current_line(191, ng0);
    t2 = (t0 + 6544);
    t5 = (t0 + 3224);
    t8 = (t5 + 32U);
    t10 = *((char **)t8);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB106;

LAB113:    xsi_set_current_line(192, ng0);
    t2 = (t0 + 6552);
    t5 = (t0 + 3224);
    t8 = (t5 + 32U);
    t10 = *((char **)t8);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB106;

LAB114:    xsi_set_current_line(193, ng0);
    t2 = (t0 + 6560);
    t5 = (t0 + 3224);
    t8 = (t5 + 32U);
    t10 = *((char **)t8);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB106;

LAB115:    xsi_set_current_line(194, ng0);
    t2 = (t0 + 6568);
    t5 = (t0 + 3224);
    t8 = (t5 + 32U);
    t10 = *((char **)t8);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB106;

LAB116:    xsi_set_current_line(195, ng0);
    t2 = (t0 + 6576);
    t5 = (t0 + 3224);
    t8 = (t5 + 32U);
    t10 = *((char **)t8);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB106;

LAB118:    xsi_error(ng2);
    goto LAB119;

LAB120:    t16 = (-(t15));
    t15 = t16;
    goto LAB121;

LAB122:    xsi_error(ng2);
    goto LAB123;

LAB124:    t20 = (-(t19));
    t19 = t20;
    goto LAB125;

LAB136:;
}


extern void work_a_0344055537_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0344055537_3212880686_p_0,(void *)work_a_0344055537_3212880686_p_1,(void *)work_a_0344055537_3212880686_p_2};
	xsi_register_didat("work_a_0344055537_3212880686", "isim/top_modul_isim_beh.exe.sim/work/a_0344055537_3212880686.didat");
	xsi_register_executes(pe);
}
