files = fizzBuzz.c

default: run

run: build
	./run < test.in
build: compile
	gcc -o run fizzBuzz.o
compile: $(files)
	gcc -c fizzBuzz.c