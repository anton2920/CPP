# Initializing variables
CPP = g++
CPPFLAGS = -Wall -Wextra -std=c++17 -O2
LDFLAGS = -lm

# Main part 
all: main.o fraction.o # vector.o
	$(CPP) $(CPPFLAGS) main.o fraction.o -o main $(LDFLAGS)

main.o: main.cpp
	$(CPP) $(CPPFLAGS) -c main.cpp

fraction.o: fraction.cpp fraction.hpp
	$(CPP) $(CPPFLAGS) -c fraction.cpp

# vector.o: vector.hpp
# 	$(CPP) $(CPPFLAGS) -c vector.hpp -o vector.o

clean:
	rm -f *.o main