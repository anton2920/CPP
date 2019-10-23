# Initializing variables
CPP = g++
CPPFLAGS = -Wall -Wextra -std=c++17 -O2
LDFLAGS = -lm

# Main part 
all: main.o pharmacy.o libs.o
	$(CPP) $(CPPFLAGS) main.o pharmacy.o libs.o -o main $(LDFLAGS)

main.o: main.cpp
	$(CPP) $(CPPFLAGS) -c main.cpp

pharmacy.o: pharmacy.cpp pharmacy.hpp
	$(CPP) $(CPPFLAGS) -c pharmacy.cpp

libs.o: libs.cpp libs.hpp
	$(CPP) $(CPPFLAGS) -c libs.cpp

clean:
	rm -f *.o main