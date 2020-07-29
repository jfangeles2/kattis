files = solvingForCarrots.c

default: run

run: build
	./run < test.in
build: compile
	gcc -o run solvingForCarrots.o
compile: $(files)
	gcc -c solvingForCarrots.c