files = stopwatch.c

default: run

run: build
	./run < test.in
build: compile
	gcc -o run stopwatch.o
compile: $(files)
	gcc -c stopwatch.c