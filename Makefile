
%.o: %.c
	gcc -c $<

all: cnn.o 
	gcc -o cnn cnn.o


clean:
	rm -f *.o cnn
	

#
#
#  %.o: %.c
#          gcc -c $<
#
#
## == rule for kernel/ ==
#$(DIR_KERENL)/%.o: $(DIR_KERENL) /%.asm
#	    $(AS) $< -o $@
#
#$(DIR_KERENL)/%.o: $(DIR_KERENL) /%.c
#	    $(CC) $(CFLAGS) $< -o $@ 
#
#
## == rule for per-task ==
#
#all: clean @mkdir
#@ is for not displaying
#
#.PHONY is for remark keywords
#.PHONY: clean
#


