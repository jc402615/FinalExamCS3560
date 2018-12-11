all: counter.cc
	g++ -Wall -o count counter.cc
doc: counter.cc
	doxygen counter.cc
clean:
	-rm count
