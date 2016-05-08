#=======================================================================================#
# dread_gtest_makefile.mk
#=======================================================================================#
#  Created on: Oct 3, 2015
#      Author: puch
#=======================================================================================#

#=======================================================================================#
# DEFINE PACKAGE RULE
#=======================================================================================#
define $(_build_)_$(_curr_)_MAKE
#=======================================================================================#
# OBJECTS DIRECTORY
# e.g: 
#     $(_build_)_$(_curr_)_src_dir=pk_module_N_code/_src
#     or
#     $(_build_)_$(_curr_)_src_dir=_src
#=======================================================================================#
$(_build_)_$(_curr_)_src_dir=_src

#=======================================================================================#
# LIB REQUISITES
#=======================================================================================#

##
 # Object Requisites
 # e.g: $(_build_)_$(_curr_)_lib_objs=$($(_build_)_OBJ_DIR)/my_lib_obj$(_obj_ext_) \
 ##
$(_build_)_$(_curr_)_lib_objs=\
   $($(_build_)_OBJ_DIR)/dread_gtest$(_obj_ext_) \

##
 # Library Requisites
 # e.g: $(_build_)_$(_curr_)_lib_libs=$($(_build_)_LIB_DIR)/$(_lprefix_)my_lib_lib$(_lib_ext_) \
 ##
$(_build_)_$(_curr_)_lib_libs=

##
 # Target Library
 # e.g: $(_build_)_$(_curr_)_lib_name=my_lib_name
 ##
$(_build_)_$(_curr_)_lib_name=dread_gtest

#=======================================================================================#
# BIN REQUISITES
#=======================================================================================#

##
 # Object Requisites
 # e.g: $(_build_)_$(_curr_)_bin_objs=$($(_build_)_OBJ_DIR)/my_bin_obj$(_obj_ext_) \
 ##
$(_build_)_$(_curr_)_bin_objs=

##
 # Library Requisites
 # e.g: $(_build_)_$(_curr_)_bin_libs=$($(_build_)_LIB_DIR)/$(_lprefix_)my_bin_lib$(_lib_ext_) \
 ##
$(_build_)_$(_curr_)_bin_libs=\
   $($(_build_)_LIB_DIR)/$(_lprefix_)dread$(_lib_ext_) \

##
 # Target Binary
 # e.g: $(_build_)_$(_curr_)_bin_name=my_bin_name
 ##
$(_build_)_$(_curr_)_bin_name=dread_gtest
#=======================================================================================#
# END PACKAGE RULE
#=======================================================================================#
endef
#=======================================================================================#
# LOCAL VARIABLES
#=======================================================================================#

#=======================================================================================#
# LOCAL DEFINES 
#=======================================================================================#

#=======================================================================================#
# LOCAL DEFINE EXPANSIONS
#=======================================================================================#

#=======================================================================================#
# LOCAL RULES EXPANSIONS
#=======================================================================================#

#=======================================================================================#
# INCLUDE PK PROJECT UTILITY
#=======================================================================================#
include $($(_build_)_PROJECT_DIR)/$($(_build_)_MAK_DIR)/epilog.mk
#=======================================================================================#
# dread_gtest_makefile.mk
#=======================================================================================#
# Changes Log
#
#
#=======================================================================================#
