files = qaly.c

default: run

run: build
	./run < test.in
build: compile
	gcc -o run qaly.o
compile: $(files)
	gcc -c qaly.c