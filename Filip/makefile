files = filip.c

default: run

run: build
	./run < test.in
build: compile
	gcc -o run filip.o
compile: $(files)
	gcc -c filip.c