files = heartRate.c

default: run

run: build
	./run < test.in
build: compile
	gcc -o run heartRate.o
compile: $(files)
	gcc -c heartRate.c