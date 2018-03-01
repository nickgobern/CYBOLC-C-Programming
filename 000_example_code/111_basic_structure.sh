#!/bin/bash

###############################################################################
# FILE NAME : 00_1_structure.sh
# AUTHOR : J.Enochs
# CREATION DATE : 07-Apr-2017
# LAST MODIFIED : 07-Apr-2017
# DESCRIPTION :
#
###############################################################################/

./a.out
rc=$?

if [[ $rc != 0 ]]; then
    echo "Program Failed!" 
else
    echo "Program Succeeded!"
fi
