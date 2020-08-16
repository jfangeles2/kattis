files = noDuplicates.c

default: run

run: build
	./run < test.in
build: compile
	gcc -o run noDuplicates.o
compile: $(files)
	gcc -c noDuplicates.c