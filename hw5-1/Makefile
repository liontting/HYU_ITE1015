all: swaping.o command_argument.o circle_main.o circle.o cmdarg.o
	g++ -o swaping swaping.o
	g++ -o command_argument command_argument.o
	g++ -o circle circle_main.o circle.o
	g++ -o cmdarg cmdarg.o
swaping.o: swaping.cc
	g++ -c swaping.cc
command_argument.o: command_argument.cc
	g++ -c command_argument.cc
circle_main.o: circle_main.cc
	g++ -c circle_main.cc
circle.o: circle.cc
	g++ -c circle.cc
cmdarg.o: cmdarg.cc
	g++ -c cmdarg.cc
clean:
	rm swaping swaping.o command_argument command_argument.o circle_main.o circle circle.o cmdarg cmdarg.o
