#include<bits/stdc++.h>
using namespace std;

class Student{

        string name;
        int roll_no;
        double weight;

        public:

        void setName(string str){
            this->name = str;
        }

        string getName(){
            return this->name;
        }
};

int main(){

    Student S1;
    Student S2;

    S1.setName("Ashutosh");
    cout<<S1.getName()<<endl;

    S2.setName("Arun");
    cout<<S2.getName()<<endl;



}