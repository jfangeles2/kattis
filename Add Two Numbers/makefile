files = addTwoNumbers.c

default: run

run: build
	./run < test.in
build: compile
	gcc -o run addTwoNumbers.o
compile: $(files)
	gcc -c addTwoNumbers.c