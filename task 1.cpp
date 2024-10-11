#include <iostream>
using namespace std;

class alpha {
	int x;
public:
	alpha() {
		x= 3;
	}
	friend int sum(alpha, beta);
};

class beta {
	int y;
public:
	beta() {
		y = 7;
	}
	friend int sum(alpha, beta);
};

int sum(alpha a, beta b) {
	return (a.x + b.y);
}

int main() {
	alpha a;
	beta b;
	cout << "Sum of two data items is = " << sum(a, b) << endl;
	return 0;
}