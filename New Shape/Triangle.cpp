#include "Triangle.h"
#include "Shape.h"
#include <iostream>

using namespace std;

Triangle::Triangle()
{
    cout << " TRIANGLE CREATED " << endl;
}

Triangle::~Triangle()
{
    cout << " TRIANGLE DESTROYED " << endl;
}

void Triangle::Display(){
cout << " Area of Triangle is : " << getArea() <<endl;
}
