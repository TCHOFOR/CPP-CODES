#include "Rectangle.h"
#include <iostream>

using namespace std;

Rectangle::Rectangle()
{
    cout << " The Rectangle Class is Created." << endl;
}

Rectangle::~Rectangle()
{
    cout << " The Rectangle Class is Destroyed." << endl;
}

void Rectangle::Display(){
 cout << " The Area of Rectangle  is : " << getArea() << endl;
}
