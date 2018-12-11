all: counter.cc
	g++ -Wall -o count counter.cc
doc: counter.cc
	doxygen counter.cc
check: counter.cc
	g++ -Wall -o count counter.cc
	cppcheck counter.cc
	valgrind ./count
clean:
	-rm count
