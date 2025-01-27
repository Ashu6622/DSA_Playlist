#include<bits/stdc++.h>
using namespace std;

// dynamic allocation and static allocation

class Student{

    public:
    string name;
    string grade;
    int roll_no;

};

int main(){

    Student * s1 = new Student;  //dynamic allocation
    Student s2;  //static allocation
    s1->name = "Ashutosh";
    s2.name = "Ayush";
    cout<<s1->name<<endl;
    cout<<(*s1).name<<endl;
    cout<<s2.name<<endl;

}