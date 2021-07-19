files = cetvrta.c

default: run

run: build
	./run < test.in
build: compile
	gcc -o run cetvrta.o
compile: $(files)
	gcc -c cetvrta.c