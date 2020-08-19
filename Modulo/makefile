files = modulo.c

default: run

run: build
	./run < test.in
build: compile
	gcc -o run modulo.o
compile: $(files)
	gcc -c modulo.c