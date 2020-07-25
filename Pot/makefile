files = pot.c

default: run

run: build
	./run < test.in
build: compile
	gcc -o run pot.o -lm
compile: $(files)
	gcc -c pot.c -lm