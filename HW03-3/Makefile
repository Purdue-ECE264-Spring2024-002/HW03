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

testall: test1 test2 test3 test4

test1: hw03
	./hw03 inputs/2016 > output16
	diff output16 expected/expected16

test2: hw03
	./hw03 inputs/2017 > output17
	diff output17 expected/expected17

test3: hw03
	./hw03 inputs/2018 > output18
	diff output18 expected/expected18

test4: hw03
	./hw03 inputs/2019 > output19
	diff output19 expected/expected19

clean: # remove all machine generated files
	rm -f hw03 *.o output?? *~

