all: MyVector_main.o MyVector.o
	g++ -o MyVector MyVector_main.o MyVector.o
MyVector_main.o: MyVector_main.cpp
	g++ -c MyVector_main.cpp
MyVector.o: MyVector.cpp
	g++ -c MyVector.cpp
clean:
	rm MyVector MyVector_main.o MyVector.o
