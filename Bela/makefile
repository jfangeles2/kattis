files = bela.c

default: run

run: build
	./run < test.in
build: compile
	gcc -o run bela.o
compile: $(files)
	gcc -c bela.c