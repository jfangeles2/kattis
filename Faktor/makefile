files = faktor.c

default: run

run: build
	./run < test.in
build: compile
	gcc -o run faktor.o
compile: $(files)
	gcc -c faktor.c