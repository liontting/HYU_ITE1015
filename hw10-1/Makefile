all: class_function.o class_function_main.o cast_quiz.o dynamic_cast.o dynamic_cast_main.o shapes.o shapes_main.o
	g++ -o class_function class_function.o class_function_main.o
	g++ -o cast_quiz cast_quiz.o
	g++ -o dynamic_cast dynamic_cast.o dynamic_cast_main.o
	g++ -o shapes shapes.o shapes_main.o
class_function.o: class_function.cc
	g++ -c class_function.cc
class_function_main.o: class_function_main.cc
	g++ -c class_function_main.cc
cast_quiz.o: cast_quiz.cc
	g++ -c cast_quiz.cc
dynamic_cast.o: dynamic_cast.cc
	g++ -c dynamic_cast.cc
dynamic_cast_main.o: dynamic_cast_main.cc
	g++ -c dynamic_cast_main.cc
shapes.o: shapes.cc
	g++ -c shapes.cc
shapes_main.o: shapes_main.cc
	g++ -c shapes_main.cc
clean:
	rm class_function class_function.o class_function_main.o cast_quiz cast_quiz.o dynamic_cast dynamic_cast.o dynamic_cast_main.o shapes shapes.o shapes_main.o
