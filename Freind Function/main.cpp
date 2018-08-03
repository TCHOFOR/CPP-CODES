#include <iostream>

using namespace std;

class Rectangle {
private:
    int wid;
    int len;
public:
    void ReadValue(){
     cout << "Enter the Width: ";
     cin >>wid;
     cout << "Enter the Length: ";
     cin >>len;
    }
    int getArea(){
     return len * wid;
    }
    friend void Read(  Rectangle& rect );
};

void Read (  Rectangle& rect ) {
 cout << "Enter the Width: ";
 cin >> rect.wid;
 cout << "Enter the Length: ";
 cin >>rect.len;
}

int main(){

    Rectangle r;

    Read(r);

    cout << "The Area is " << r.getArea() << endl;

    r.ReadValue();

    cout << "The Area is " << r.getArea() << endl;

    cout << "Hello world!" << endl;
    return 0;
}
