files = takeTwoStones.c

default: run

run: build
	./run < test.in
build: compile
	gcc -o run takeTwoStones.o
compile: $(files)
	gcc -c takeTwoStones.c