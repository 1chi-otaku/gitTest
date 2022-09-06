#include <iostream>
using namespace std;
class Master {
	int a, b, c;
public: 
	Master() {
		a = b = c = 1;
	}
	Master(int a, int b, int c) {
		this->a = a;
		this->b = b;
		this->c = c;
	}
	void Print() {
		cout << "a - " << a << endl;
		cout << "b - " << b << endl;
		cout << "c - " << c << endl;
	}
};
int main() {
	int a;
	Master obj1(5, 19, 12);
	obj1.Print();
	return 0;
}