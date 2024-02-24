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

#include "xsi.h"

struct XSI_INFO xsi_info;

char *IEEE_P_2592010699;
char *STD_STANDARD;
char *IEEE_P_3499444699;
char *IEEE_P_0774719531;
char *IEEE_P_1242562249;
char *IEEE_P_3972351953;
char *STD_TEXTIO;
char *XILINXCORELIB_P_1837083571;
char *XILINXCORELIB_P_3381355550;
char *XILINXCORELIB_P_1849098369;
char *XILINXCORELIB_P_2602938013;
char *XILINXCORELIB_P_3160202542;
char *XILINXCORELIB_P_3155556343;
char *IEEE_P_3620187407;
char *UNISIM_P_0947159679;
char *IEEE_P_2717149903;
char *IEEE_P_1367372525;
char *UNISIM_P_3222816464;
char *XILINXCORELIB_P_3743709326;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    ieee_p_1242562249_init();
    ieee_p_3499444699_init();
    ieee_p_0774719531_init();
    unisim_p_0947159679_init();
    std_textio_init();
    ieee_p_2717149903_init();
    ieee_p_1367372525_init();
    unisim_p_3222816464_init();
    ieee_p_3620187407_init();
    unisim_a_0850834979_2152628908_init();
    unisim_a_0714155612_2768510774_init();
    unisim_a_0018426790_2768510774_init();
    unisim_a_1297477671_0429821216_init();
    unisim_a_3379814620_2584565154_init();
    work_a_0344055537_3212880686_init();
    work_a_2239630122_3212880686_init();
    work_a_1042393148_3212880686_init();
    ieee_p_3972351953_init();
    xilinxcorelib_p_1837083571_init();
    xilinxcorelib_p_3381355550_init();
    xilinxcorelib_p_1849098369_init();
    xilinxcorelib_p_2602938013_init();
    xilinxcorelib_p_3160202542_init();
    xilinxcorelib_p_3155556343_init();
    xilinxcorelib_p_3743709326_init();
    xilinxcorelib_a_4056852479_3212880686_init();
    xilinxcorelib_a_0340792457_3212880686_init();
    xilinxcorelib_a_3738378600_3212880686_init();
    xilinxcorelib_a_0019007991_3212880686_init();
    xilinxcorelib_a_1579366007_3212880686_init();
    xilinxcorelib_a_2178031336_3212880686_init();
    xilinxcorelib_a_1488813177_3212880686_init();
    xilinxcorelib_a_3173240591_3212880686_init();
    xilinxcorelib_a_0071436567_3212880686_init();
    xilinxcorelib_a_3685949832_3212880686_init();
    xilinxcorelib_a_0754089944_3212880686_init();
    work_a_1825393069_1683385551_init();
    work_a_3166994500_3212880686_init();
    work_a_1122134793_3212880686_init();


    xsi_register_tops("work_a_1122134793_3212880686");

    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    STD_STANDARD = xsi_get_engine_memory("std_standard");
    IEEE_P_3499444699 = xsi_get_engine_memory("ieee_p_3499444699");
    IEEE_P_0774719531 = xsi_get_engine_memory("ieee_p_0774719531");
    IEEE_P_1242562249 = xsi_get_engine_memory("ieee_p_1242562249");
    IEEE_P_3972351953 = xsi_get_engine_memory("ieee_p_3972351953");
    STD_TEXTIO = xsi_get_engine_memory("std_textio");
    XILINXCORELIB_P_1837083571 = xsi_get_engine_memory("xilinxcorelib_p_1837083571");
    XILINXCORELIB_P_3381355550 = xsi_get_engine_memory("xilinxcorelib_p_3381355550");
    XILINXCORELIB_P_1849098369 = xsi_get_engine_memory("xilinxcorelib_p_1849098369");
    XILINXCORELIB_P_2602938013 = xsi_get_engine_memory("xilinxcorelib_p_2602938013");
    XILINXCORELIB_P_3160202542 = xsi_get_engine_memory("xilinxcorelib_p_3160202542");
    XILINXCORELIB_P_3155556343 = xsi_get_engine_memory("xilinxcorelib_p_3155556343");
    IEEE_P_3620187407 = xsi_get_engine_memory("ieee_p_3620187407");
    UNISIM_P_0947159679 = xsi_get_engine_memory("unisim_p_0947159679");
    IEEE_P_2717149903 = xsi_get_engine_memory("ieee_p_2717149903");
    IEEE_P_1367372525 = xsi_get_engine_memory("ieee_p_1367372525");
    UNISIM_P_3222816464 = xsi_get_engine_memory("unisim_p_3222816464");
    XILINXCORELIB_P_3743709326 = xsi_get_engine_memory("xilinxcorelib_p_3743709326");

    return xsi_run_simulation(argc, argv);

}
