files = oddities.c

default: run

run: build
	./run < test.in
build: compile
	gcc -o run oddities.o
compile: $(files)
	gcc -c oddities.c