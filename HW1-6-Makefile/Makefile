WARNING = -Wall -Wshadow --pedantic
ERROR = -Wvla -Werror
GCC = gcc -std=c99 -g $(WARNING) $(ERROR)

build: hw001.c
	$(GCC) hw001.c -o hw001

test1: build
	./hw001 4 5 > output1
	diff output1 expected/expected1

test2: build
	./hw001 987 321 > output2
	diff output2 expected/expected2

clean: # remove all machine generated files
	rm -f hw001 output? *~




