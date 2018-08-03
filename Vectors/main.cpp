#include <iostream>
#include <vector>
#include <cctype>
#include <string>

using namespace std;

class Numbers{
private:
    int val;
    double dbl;
public:
    void Read(){
     cout << "Enter int: ";
     cin >>val;
     cout << "Enter double: ";
     cin >>dbl;
    }
    void Display(){
      cout << " Double is " << dbl << " " << " and Integer is " << val <<endl;
    }

};

int main(){

    cout << " Enter number of numbers: ";
    int nums=0;
    cin >>nums;

    vector<Numbers>num(nums);
    for(int j=0; j<num.size(); j++){
        num[j].Read();
    }
    for(int j=0; j<num.size(); j++){
        num[j].Display();
    }
    vector<int>value(4);
    value[0]=9;
    value[1]=3;
    value[2]=6;
    value[3]=4;
    for(int i=0; i<4; i++){
        cout << " " << value[i] <<endl;
    }

    vector<char>ch(3);
    for(int x=0; x<ch.size(); x++){
        cout <<"Enter a value: ";
        cin >>ch[x];
    }

    return 0;
}
