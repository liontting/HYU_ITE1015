all: classes.o classes_main.o print_info.o print_info_main.o print_member.o print_member_main.o
	g++ -o classes classes.o classes_main.o
	g++ -o print_info print_info.o print_info_main.o
	g++ -o print_member print_member.o print_member_main.o
classes.o: classes.cc
	g++ -c classes.cc
classes_main.o: classes_main.cc
	g++ -c classes_main.cc
print_info.o: print_info.cc
	g++ -c print_info.cc
print_info_main.o: print_info_main.cc
	g++ -c print_info_main.cc
print_member.o: print_member.cc
	g++ -c print_member.cc
print_member_main.o: print_member_main.cc
	g++ -c print_member_main.cc
clean:
	rm classes classes.o classes_main.o print_info print_info.o print_info_main.o print_member print_member.o print_member_main.o
