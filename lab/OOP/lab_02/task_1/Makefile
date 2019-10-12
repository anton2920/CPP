# Initializing variables
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17 -O2
LDFLAGS = 

# Main part
all: main.o libs.o student.o
	$(CXX) $(CXXFLAGS) main.o libs.o student.o -o main $(LDFLAGS)

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp

libs.o: libs.cpp libs.hpp
	$(CXX) $(CXXFLAGS) -c libs.cpp

student.o: student.cpp student.hpp
	$(CXX) $(CXXFLAGS) -c student.cpp

clean:
	rm -f *.o main