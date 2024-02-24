
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name UART_pr -dir "Z:/UART/UART_pr/planAhead_run_4" -part xc6slx16csg324-3
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "top_modul.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {ipcore_dir/DDS_sin.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {UART_rx.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {UART.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {spi_master.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {Display7seg.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {top_modul.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set_property top top_modul $srcset
add_files [list {top_modul.ucf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/DDS_sin.ncf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc6slx16csg324-3
