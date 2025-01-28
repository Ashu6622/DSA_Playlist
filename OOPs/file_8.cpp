#include<bits/stdc++.h>
using namespace std;

// access specifier

class Customer{
    private:
    int roll_no;
    int age;
    string name;

    public:
    void setter(int r, int a, string n){
        this->name = n;
        this->age = a;
        this->roll_no = r;
    }

    void getter(){
            cout<<name<<" "<<age<<" "<<roll_no<<endl;
    }
};

class Parent{   

    protected:
    string name;
};

class Child : public Parent{

    public:
    void setName(string s){
        this->name = s;
    }

    void getName(){
        cout<<name<<endl;
    }

};

int main(){

    Customer c1;
    Customer c2;
    Customer c3;
    //c1.name = "Ashutosh"; // this cannot be access because is declare as private

    // we have to use the member fucntion to access the private data members of the same class, the members function should be public
    
    c1.setter(234,25,"Gulsan");
    c1.getter();
    c2.setter(236,26,"Binod");
    c3.setter(204,24,"Rajaram");
    c3.getter();
    c2.getter();

    Parent p;
    // p.name = "Rohan"; this is not accessible because it declare as protected
    Child c;  //this is derived class of Parent, this derived class can access the data members of the Parent class
    c.setName("Rohan");
    c.getName();


}