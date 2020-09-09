all: Animals.o Animals_main.o draw_shape.o draw_shape_main.o
	g++ -o Animals Animals.o Animals_main.o
	g++ -o draw_shape draw_shape.o draw_shape_main.o
Animals.o: Animals.cc
	g++ -c Animals.cc
Animals_main.o: Animals_main.cc
	g++ -c Animals_main.cc
draw_shape.o: draw_shape.cc
	g++ -c draw_shape.cc
draw_shape_main.o: draw_shape_main.cc
	g++ -c draw_shape_main.cc
clean:
	rm Animals Animals.o Animals_main.o draw_shape draw_shape.o draw_shape_main.o
