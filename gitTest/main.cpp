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
class Car {
	string Engine;
	string Fuel;
	string Country;
	Car() {
		Engine = "N/A";
		Fuel = "N/A";
		Country = "N/A";
	}
	Car(string engine, string fuel, string country) {
		Engine = engine;
		Fuel = fuel;
		Country = country;
	}
};
int main() {
	int a;
	Master obj1(5, 19, 12);
	obj1.Print();
	return 0;
}