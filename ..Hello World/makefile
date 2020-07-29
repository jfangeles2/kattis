files = helloWorld.c

default: run

run: build
	./run < test.in
build: compile
	gcc -o run helloWorld.o
compile: $(files)
	gcc -c helloWorld.c