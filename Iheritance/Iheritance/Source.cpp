#include <iostream>
#include <string.h>

using namespace std;

class Car{
private:
	string color;
	string name;
	string manufacturer;
public:
	Car(string c, string n, string m) {
		color = c;
		name = n;
		manufacturer = m;
	}
	void setColor(string color) {
		this->color = color;
	}
	string getColor() {
		return color;
	}
	void setName(string name) {
		this->name = name;
	}
	string getName() {
		return name;
	}
	void setManufact(string manufact){
		manufacturer = manufact;
	}
	string getManufact() {
		return manufacturer;
	}
	void Display() {
		cout << " " << name << " " << color << " " << manufacturer << endl;
	}

};


int main() {

	Car Audi("Red", "Acapella", "Audi");
	Audi.Display();
//	system("pause");

}
