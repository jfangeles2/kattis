files = quadrantSelection.c

default: run

run: build
	./run < test.in
build: compile
	gcc -o run quadrantSelection.o
compile: $(files)
	gcc -c quadrantSelection.c