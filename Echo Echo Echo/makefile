files = echoEchoEcho.c

default: run

run: build
	./run < test.in
build: compile
	gcc -o run echoEchoEcho.o
compile: $(files)
	gcc -c echoEchoEcho.c