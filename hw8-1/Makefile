all: number.o number_main.o rectangle.o rectangle_main.o
	g++ -o number number.o number_main.o
	g++ -o rectangle rectangle.o rectangle_main.o
number.o:
	g++ -c number.cc
number_main.o:
	g++ -c number_main.cc
rectangle.o:
	g++ -c rectangle.cc
rectangle_main.o:
	g++ -c rectangle_main.cc
clean:
	rm number number.o number_main.o rectangle rectangle.o rectangle_main.o
