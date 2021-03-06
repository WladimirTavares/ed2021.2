#!/bin/bash
# $Id: c_run.sh,v 1.3 2012-07-25 19:02:20 juanca Exp $
# Default C language run script for VPL
# Copyright (C) 2014 Juan Carlos Rodríguez-del-Pino
# License http://www.gnu.org/copyleft/gpl.html GNU GPL v3 or later
# Author Juan Carlos Rodríguez-del-Pino <jcrodriguez@dis.ulpgc.es>

#load common script and check programs
. common_script.sh
check_program gcc
cat  $VPL_SUBFILE0 >> main.c
#compile
eval g++ -o vpl_execution  cliente.cpp -lm -lutil
