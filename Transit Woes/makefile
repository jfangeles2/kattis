files = transitWoes.c

default: run

run: build
	./run < test.in
build: compile
	gcc -o run transitWoes.o
compile: $(files)
	gcc -c transitWoes.c