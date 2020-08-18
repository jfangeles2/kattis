files = hangingOutOnTheTerrace.c

default: run

run: build
	./run < test.in
build: compile
	gcc -o run hangingOutOnTheTerrace.o
compile: $(files)
	gcc -c hangingOutOnTheTerrace.c