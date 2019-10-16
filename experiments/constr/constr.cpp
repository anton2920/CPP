#include <iostream>

class A {

public:
	int b = 0;

	A() {
		b = 4;
	}

	A(int c = 5) {
		b = c;
	}

	int getB() {
		return this->b;
	}
};

int main() {

	A obj;

	std::cout << obj.getB() << std::endl;
}