# Initializing variables
CPP = g++
CPPFLAGS = -Wall -Wextra -std=c++17 -O2
LDFLAGS = 
DEBUG = 

# Main part
all: main.o libs.o user.o
	$(CPP) $(CPPFLAGS) $(DEBUG) main.o libs.o user.o -o main $(LDFLAGS)

main.o: main.cpp
	$(CPP) $(CPPFLAGS) $(DEBUG) main.cpp -c

libs.o: libs.cpp libs.hpp
	$(CPP) $(CPPFLAGS) $(DEBUG) libs.cpp -c

user.o: user.cpp user.hpp
	$(CPP) $(CPPFLAGS) $(DEBUG) user.cpp -c

clean:
	rm -f *.o main