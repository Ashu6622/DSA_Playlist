#include<bits/stdc++.h>
using namespace std;

// virtual function
// function overridding

class Base{

    public:

    //  void print(){
    //     cout<<"Base class :"<<endl;
    // }

    virtual void print(){
        cout<<"Base class :"<<endl;
    }
};

class Derived : public Base{

    public:

    void print(){
        cout<<"Derived class :"<<endl;
        
        // Base::print();
    }

};

int main(){

    // Derived D;
    // D.print();

    Derived D;
    Base *ptr = &D;
    ptr->print();

    // Derived D;
    // D.print();

    // Derived D;
    // Base* ptr = &D;
    // ptr->print();

     
}