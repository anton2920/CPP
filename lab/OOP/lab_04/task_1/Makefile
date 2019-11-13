# Initializing variables
CPP = g++
CPPFLAGS = -Wall -Wextra -std=c++17 -O2
LDFLAGS = 
DEBUG = 

# Main part
all: main.o animal.o predator.o
	$(CPP) $(CPPFLAGS) $(DEBUG) main.o animal.o predator.o -o main $(LDFLAGS)

main.o: main.cpp
	$(CPP) $(CPPFLAGS) $(DEBUG) main.cpp -c

animal.o: animal.cpp animal.hpp
	$(CPP) $(CPPFLAGS) $(DEBUG) animal.cpp -c

predator.o: predator.cpp predator.hpp
	$(CPP) $(CPPFLAGS) $(DEBUG) predator.cpp -c

clean:
	rm -f *.o main