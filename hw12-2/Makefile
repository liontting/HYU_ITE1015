all: list_main.o ptr.o
	g++ -o list list_main.o
	g++ -o ptr ptr.o
list_main.o: list_main.cc
	g++ -c list_main.cc
ptr.o: ptr.cc
	g++ -c ptr.cc
clean:
	rm list list_main.o ptr ptr.o
