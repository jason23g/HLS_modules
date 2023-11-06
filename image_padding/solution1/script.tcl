############################################################
## This file is generated automatically by Vitis HLS.
## Please DO NOT edit it.
## Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
############################################################
open_project image_padding
set_top img_pad
add_files img_pad_src/img_pad.c
add_files img_pad_src/img_pad.h
add_files -tb img_pad_src/img_pad_tb.c -cflags "-Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"
open_solution "solution1" -flow_target vivado
set_part {xczu9eg-ffvb1156-2-e}
create_clock -period 10 -name default
#source "./image_padding/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog
