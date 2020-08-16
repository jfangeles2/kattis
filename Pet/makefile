files = pet.c

default: run

run: build
	./run < test.in
build: compile
	gcc -o run pet.o
compile: $(files)
	gcc -c pet.c