# Initializing variables
CPP = g++
CPPFLAGS = -Wall -Wextra -O2 -std=c++17
LDFLAGS = 

# Main part
all: main.o libs.o list.hpp stack.hpp
	$(CPP) $(CPPFLAGS) main.o libs.o -o main $(LDFLAGS)

main.o: main.cpp
	$(CPP) $(CPPFLAGS) -c main.cpp

libs.o: libs.cpp libs.hpp
	$(CPP) $(CPPFLAGS) -c libs.cpp

#list.o: list.hpp
#	$(CPP) $(CPPFLAGS) -c list.hpp -o list.o

#stack.o: stack.hpp
#	$(CPP) $(CPPFLAGS) -c stack.hpp -o stack.o

clean:
	rm -f *.o main
