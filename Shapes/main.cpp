#include <iostream>
#include <cstdlib>
#include <string.h>
#include <ctype.h>

using namespace std;

class Shape {
    protected:
 float width;
 float height;
 float length;
    public:
        void setWidth( float wid ) {
         width = wid;
        }
        float getWidth(void) {
         return width;
        }
        void setHeight( float hei ) {
         height = hei;
        }
        float getHeight(void) {
         return height;
        }
        void setLength( float len ) {
         length = len;
        }
        float getLength(void) {
         return length;
        }
        virtual float getArea(void) = 0;
        void Read(){
         cout << " Length: " ;
         cin >>length;
         cout << "Width: ";
         cin >>width;
         cout << " Height: ";
         cin >>height;
        }
};

class Rectangle:public Shape {
public:
  Rectangle( float l, float w ) {
    length = l;
    width = w;
  }
  virtual float getArea(void) {
   return length * width;
  }
};

class Triangle: public Shape {
 public:
    Triangle ( float h, float b ) {
       height = h;
       length = b;
    }
    virtual float getArea(void) {
     return height * length * 0.5;
    }
};

class Square: public Shape {
public:
    Square ( float side ) {
     width = side;
    }
    virtual float getArea(void) {
     return width * width;
    }
} ;
class Cube: public Shape {
public:
    Cube ( float  side ) {
     length = width = height = side;
    }
    virtual float getArea(void) {
     return length * width * height;
    }
};

int main(){

    Shape *shape;
     //shape->Read();
    Rectangle rect(4.6,7.8);
    Triangle tri(8.8,2.3);
    Square sq(4.5);
    Cube c(6.9);
    //shape->Read();
    shape = &rect;
    cout << "Area of Rectangle: " << shape->getArea() <<endl;
    shape = &tri;
    cout << "Area of Triangle: " << shape->getArea() <<endl;
    shape = &sq;
    cout << "Area of Square: " << shape->getArea() <<endl;
    shape = &c;
    cout << "Area of Square: " << shape->getArea() <<endl;
    cout << endl;
    system("pause");
}
