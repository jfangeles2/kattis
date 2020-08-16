files = ladder.c

default: run

run: build
	./run < test.in
build: compile
	gcc -o run ladder.o -lm
compile: $(files)
	gcc -c ladder.c -lm