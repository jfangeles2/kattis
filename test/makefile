files = test.c

default: run

run: build
	./run < test.in
build: compile
	gcc -o run test.o
compile: $(files)
	gcc -c test.c