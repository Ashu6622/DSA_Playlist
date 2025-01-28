#include<bits/stdc++.h>
using namespace std;

// constructor and Destructor

class Customer{
    public:
    int roll_no;
    string name;

    inline Customer(string s, int val): roll_no(val), name(s){
        cout<<name<<endl;
    }

    ~Customer(){
        cout<<name<<endl;
    }

};
int main(){

        Customer c1("Ashutosh", 123);
        Customer c2("Rahul", 456);
        Customer * c3 = new Customer("Ayush", 987);  //destuctor is not called for this onject because, becase it dyanamically created, so to call the destructor we have to delete this object explicitly
        delete c3;
}