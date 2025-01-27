#include<bits/stdc++.h>
using namespace std;

class Student{

    public:

    string name;
    int roll_no;
    double weight;

    Student(){
        cout<<"This is called"<<endl;   //this is default construction
    }

    Student(string name, int roll_no){
        this->name = name;                  //this is called parame terised constuctor
        this->roll_no = roll_no;
    }
};

int main(){

    Student s1;
    Student s2("Ashu", 123);
    cout<<s2.name<<" "<<s2.roll_no<<endl;

    Student s3("Shree", 982, 73.45);
}