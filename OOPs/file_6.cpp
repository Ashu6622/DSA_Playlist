#include<bits/stdc++.h>
using namespace std;

// copy constructor

class Customer{
    public:
    string name;
    int age;
    double balance;

    inline Customer(string s, int val) : name(s), age(val) {}

    Customer(Customer &c){    //parameterised copy constructor 
        this->name = c.name;
        this->age = c.age;
        this->balance = 23490.78;
    }
};

int main(){

    Customer a("Ashutosh", 22);
    //Customer b(a);  //default copy constructor
    Customer b(a);  //parameterised copy constructor

    cout<<a.name<<" "<<a.age<<endl;
    cout<<b.name<<" "<<b.age<<" "<<b.balance<<endl;

    Customer c = b;
    cout<<c.name<<" "<<c.age<<" "<<c.balance<<endl;
}