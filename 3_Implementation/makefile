#TargetName : Dependencies
#<TAB>commands

PROJ_NAME= MatrixCalculator
FixPath = $(subst/,\,$1)
EXEC = out

Build : matrix_cal.c matrix_cal.exe
    gcc matrix_cal.c matrix_cal.exe -o $(call FixPath,$(B$(PROJ_NAME).$(EXEC)))

Run : Build
     ./$(call FixPath,$(PROJ_NAME).$(EXEC))

Clean : 
    $(RM) $(call FixPath,$(BUILD_DIR)/*.out)