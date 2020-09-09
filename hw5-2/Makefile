all: get_sum_diff.o sort_int.o sort.o
	g++ -o get_sum_diff get_sum_diff.o
	g++ -o sort_int sort_int.o sort.o
get_sum_diff.o: get_sum_diff.cc
	g++ -c get_sum_diff.cc
sort_int.o: sort_int.cc
	g++ -c sort_int.cc
sort.o: sort.cc
	g++ -c sort.cc
clean:
	rm get_sum_diff get_sum_diff.o sort_int.o sort.o sort_int
