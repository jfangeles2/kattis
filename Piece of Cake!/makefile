files = pieceOfCake.c

default: run

run: build
	./run < test.in
build: compile
	gcc -o run pieceOfCake.o
compile: $(files)
	gcc -c pieceOfCake.c -lm