files = autori.c

default: run

run: build
	./run < test.in
build: compile
	gcc -o run autori.o
compile: $(files)
	gcc -c autori.c