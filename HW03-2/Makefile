# ***
# *** DO NOT submit this file 
# ***

WARNING = -Wall -Wshadow --pedantic
ERROR = -Wvla -Werror
GCC = gcc -std=c11 -g $(WARNING) $(ERROR) 

SRCS = main.c filechar.c
OBJS = $(SRCS:%.c=%.o)

hw03: $(OBJS) 
	$(GCC) $(OBJS) -o hw03

.c.o: 
	$(GCC) -c $*.c 

clean: # remove all machine generated files
	rm -f hw03 *.o output?? *~

