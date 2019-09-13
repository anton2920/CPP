# Initializing variables
CPP = g++
CPPFLAGS = -Wall -Wextra -std=c++17 -O2
LDFLAGS = -lm

# Main part
all: new vector ptr

# First approach
new: main_1.o io.o marr.o menu.o libs_1.o
	$(CPP) $(CPPFLAGS) new/main.o io.o menu.o new/libs.o new/marr.o -o main_new $(LDFLAGS)

main_1.o: new/main.cpp
	$(CPP) $(CPPFLAGS) -c new/main.cpp -o new/main.o

libs_1.o: new/libs.cpp
	$(CPP) $(CPPFLAGS) -c new/libs.cpp -o new/libs.o

marr.o: new/marr.cpp
	$(CPP) $(CPPFLAGS) -c new/marr.cpp -o new/marr.o

# Second approach
vector: main_2.o io.o menu.o libs_2.o
	$(CPP) $(CPPFLAGS) vector/main.o io.o menu.o vector/libs.o -o main_vector $(LDFLAGS)

main_2.o: vector/main.cpp
	$(CPP) $(CPPFLAGS) -c vector/main.cpp -o vector/main.o

libs_2.o: vector/libs.cpp
	$(CPP) $(CPPFLAGS) -c vector/libs.cpp -o vector/libs.o

# Third approach
ptr:

# General parts
io.o: io.cpp
	$(CPP) $(CPPFLAGS) -c io.cpp

menu.o: menu.cpp
	$(CPP) $(CPPFLAGS) -c menu.cpp

clean:
	rm -f *.o new/*.o vector/*.o ptr/*.o main_new main_vector output.txt