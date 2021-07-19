files = datum.c

default: run

run: build
	./run < test.in
build: compile
	gcc -o run datum.o
compile: $(files)
	gcc -c datum.c