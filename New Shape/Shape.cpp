#include "Shape.h"
#include <iostream>

using namespace std;

Shape::Shape()
{
    cout << "        SHAPE IS CREATED      " << endl;
}

void Shape::Read() {
         cout << "Enter the Length: ";
         cin >> length;
         cout << " Enter the Width: ";
         cin >> width;
}
void Shape::Print() {
     cout << " The Length is " << length << " And Width is " << width << endl;
}
Shape::~Shape()
{
    cout << "        SHAPE DESTROYED       " << endl;
}
