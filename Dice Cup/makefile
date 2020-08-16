files = diceCup.c

default: run

run: build
	./run < test.in
build: compile
	gcc -o run diceCup.o
compile: $(files)
	gcc -c diceCup.c