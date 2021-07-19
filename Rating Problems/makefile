files = ratingProblems.c

default: run

run: build
	./run < test.in
build: compile
	gcc -o run ratingProblems.o
compile: $(files)
	gcc -c ratingProblems.c