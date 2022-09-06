#include <iostream>
using namespace std;
class Master {
	int a, b, c;
public: 
	Master() {
		a = b = c = 0;
	}
	Master(int a, int b, int c) {
		this->a = a;
		this->b = b;
		this->c = c;
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

	return 0;
}