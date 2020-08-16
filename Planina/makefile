files = planina.c

default: run

run: build
	./run < test.in
build: compile
	gcc -o run planina.o
compile: $(files)
	gcc -c planina.c