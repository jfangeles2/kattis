files = r2.c

default: run

run: build
	./run < test.in
build: compile
	gcc -o run r2.o
compile: $(files)
	gcc -c r2.c