files = bijele.c

default: run

run: build
	./run < test.in
build: compile
	gcc -o run bijele.o
compile: $(files)
	gcc -c bijele.c