all: print_shape.o print_shape_main.o clock_time.o clock_time_main.o
	g++ -o print_shape print_shape.o print_shape_main.o
	g++ -o clock_time clock_time.o clock_time_main.o
print_shape.o: print_shape.cc
	g++ -c print_shape.cc
print_shape_main.o: print_shape_main.cc
	g++ -c print_shape_main.cc
clock_time.o: clock_time.cpp
	g++ -c clock_time.cpp
clock_time_main.o: clock_time_main.cc
	g++ -c clock_time_main.cc
clean:
	rm print_shape print_shape.o print_shape_main.o clock_time clock_time.o clock_time_main.o
