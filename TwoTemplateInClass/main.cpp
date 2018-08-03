#include <iostream>
#include <conio.h>
#include <vector>

using namespace std;

template <class n,class g,class m,class r>

class Student{
private:
    vector<n>name;
    vector<g>grade;
    vector<m>mark;
    vector<r>remark;
public:
Student(){}

void add(n names,g grades,m marks,r remarks){
    name.push_back( names );
    grade.push_back( grades );
    mark.push_back( marks );
    remark.push_back( remarks );
}
void display(){
  for(int i=0; i<name.size(); i++){
    cout << name[i] << " " << grade[i] << " " << mark[i] << " " << remark[i] <<endl;
  }
}

};

int main(){

    Student<string,char,float,string>stud;
    stud.add("Isaac",'A',90,"Excellent");
    stud.add("Good",'C',55,"Good");
    stud.add("Hope",'B',69,"Very Good");
    stud.add("Success",'A',92,"Brilliant");
    stud.display();
    cout << "Good Hope Success" << endl;
    return 0;
}
