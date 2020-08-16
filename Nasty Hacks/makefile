files = nastyHacks.c

default: run

run: build
	./run < test.in
build: compile
	gcc -o run nastyHacks.o
compile: $(files)
	gcc -c nastyHacks.c