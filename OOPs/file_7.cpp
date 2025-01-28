#include<bits/stdc++.h>
using namespace std;

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
}