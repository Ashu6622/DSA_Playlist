#include<bits/stdc++.h>
using namespace std;

// constructors

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

    inline Student(string name, int roll_no, double weight):name(name), roll_no(roll_no), weight(weight){}  //this is inline constructor
};

int main(){

    Student s1;
    Student s2("Ashu", 123);
    cout<<s2.name<<" "<<s2.roll_no<<endl;

    // Student s3("Shree", 982, 73.45);

    Student s4("Anhinav", 345, 56.78);
    cout<<s4.name<<" "<<s4.roll_no<<" "<<s4.weight<<endl; 
}