files = stuckInATimeLoop.c

default: run

run: build
	./run < test.in
build: compile
	gcc -o run stuckInATimeLoop.o
compile: $(files)
	gcc -c stuckInATimeLoop.c