files = sevenWonders.c

default: run

run: build
	./run < test.in
build: compile
	gcc -o run sevenWonders.o
compile: $(files)
	gcc -c sevenWonders.c