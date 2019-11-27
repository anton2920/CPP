# Initializing variables
CPP = g++
CPPFLAGS = -Wall -Wextra -std=c++17 -O2
LDFLAGS = 

# Main part
all: main.o st_pr.o csas.o cts.o is.o
	$(CPP) $(CPPFLAGS) main.o st_pr.o csas.o cts.o is.o -o main $(LDFLAGS)

main.o: main.cpp
	$(CPP) $(CPPFLAGS) -c main.cpp

st_pr.o: st_pr.cpp st_pr.hpp
	$(CPP) $(CPPFLAGS) -c st_pr.cpp

csas.o: csas.cpp csas.hpp
	$(CPP) $(CPPFLAGS) -c csas.cpp

cts.o: cts.cpp cts.hpp
	$(CPP) $(CPPFLAGS) -c cts.cpp

is.o: is.cpp is.hpp
	$(CPP) $(CPPFLAGS) -c is.cpp

clean:
	rm -f *.o main