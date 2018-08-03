#include <iostream>
#include "Shape.h"
#include "Rectangle.h"
#include "Triangle.h"
using namespace std;

int main(){

    Shape s;
    s.Read();
    s.Print();
    Rectangle rect;
    rect.Read();
    rect.Display();
    Triangle tri;
    tri.Read();
    tri.Display();

    return 0;
}
