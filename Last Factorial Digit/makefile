files = lastFactorialDigit.c

default: run

run: build
	./run < test.in
build: compile
	gcc -o run lastFactorialDigit.o
compile: $(files)
	gcc -c lastFactorialDigit.c