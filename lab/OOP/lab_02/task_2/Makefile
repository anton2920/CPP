# Initializing variables
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17 -O2
LDFLAGS = 

# Main part
all: main.o slau.o
	$(CXX) $(CXXFLAGS) main.o slau.o -o main $(LDFLAGS)

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp

slau.o: slau.cpp slau.hpp
	$(CXX) $(CXXFLAGS) -c slau.cpp

clean:
	rm -f *.o main