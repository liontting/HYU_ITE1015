all: main.o magic_square.o
	g++ -o magic_square main.o magic_square.o
main.o: main.cc
	g++ -c main.cc
magic_square.o: magic_square.cc
	g++ -c magic_square.cc
clean:
	rm magic_square.o magic_square main.o
