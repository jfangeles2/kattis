files = cold-puterScience.c

default: run

run: build
	./run < test.in
build: compile
	gcc -o run cold-puterScience.o
compile: $(files)
	gcc -c cold-puterScience.c