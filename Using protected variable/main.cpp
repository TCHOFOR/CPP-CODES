#include <iostream>

using namespace std;

class Base{
 protected:
     int val;
 public:
     Base(){
      val = 0;
     }
    int getval(){
     return val;
    }
    void setval(int v){
     val = v;
    }
    void Display(){
     cout << "Value is: " << val << endl;
    }
    void Read(){
     cout << "Enter the value:" ;
     cin >> val;
    }
};

class Derived:public Base{
   private:
       int sum;
   public:
       Derived(){
        sum=0;
       }
    int getsum(){
     return sum;
    }
    void setsum(int s){
      sum=s;
    }
    void Display(){
     cout << "Sum is:" << sum << endl;
    }
    void Read(){
     cout <<"Enter the sum: ";
     cin >>sum;
    }
};

int main(){
   Derived d;
   Base b;
   b.Read();
   b.Display();
   d.Read();
   d.Display();
   int v=b.getval();
   int s=d.getsum();
   v=v-s;
   b.setval(v);
   cout << "Value is now:" <<b.getval() << endl;
   d.setsum(s);
   d.Display();
   int y=9;
   s=s+y;
   d.setsum(s);
    cout << " Added Sum is now: " << d.getsum() << endl;
    int x=8;
    v=v+x;
    b.setval(v);
    cout << "Added Value is now:" <<b.getval() << endl;
    cout << " "<< endl;
    return 0;
}
