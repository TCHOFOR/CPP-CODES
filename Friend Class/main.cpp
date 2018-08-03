#include <iostream>

using namespace std;

class Rectangle{
private:
    int len;
    int wid;
public:
    friend class Compare;

    void setWid ( int w ){
      wid = w;
    }
    void setLen ( int l ) {
      len = l;
    }
};

class Compare{
public:
    bool isEqual(const Rectangle& rect1, const Rectangle& rect2 ){
      if ( rect1.len == rect2.len && rect1.wid == rect2.wid ){
        return true;
      }
      return false;
    }
};

int main(){

    Rectangle r1,r2;

    r1.setWid(2);
    r1.setLen(6);

    r2.setWid(2);
    r2.setLen(6);

    Compare c;

    cout << "Are Both Rectangle Equal: " << c.isEqual(r1,r2) << endl;
    return 0;
}
