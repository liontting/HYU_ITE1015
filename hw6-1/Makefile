all: simple_shape.o simple_shape_main.o simple_account.o simple_account_main.o
	g++ -o simple_shape simple_shape_main.o simple_shape.o
	g++ -o simple_account simple_account_main.o simple_account.o
simple_shape.o: simple_shape.cc
	g++ -c simple_shape.cc
simple_shape_main.o: simple_shape_main.cc
	g++ -c simple_shape_main.cc
simple_account.o: simple_account.cc
	g++ -c simple_account.cc
simple_account_main.o: simple_account_main.cc
	g++ -c simple_account_main.cc
clean:
	rm simple_shape simple_shape.o simple_shape_main.o simple_account simple_account.o simple_account_main.o
