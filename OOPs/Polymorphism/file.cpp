#include<bits/stdc++.h>
using namespace std;

class Complex{

    int real;
    int imaginary;

    public:
    Complex(){

    }

    Complex(int real, int imaginary){
        this->real = real;
        this->imaginary = imaginary;
    }

    Complex operator+(Complex &c){
        Complex temp;
        temp.real = real + c.real;
        temp.imaginary = imaginary + c.imaginary;
        return temp;
    }

    void display(){
        cout<<real<<" + i"<<imaginary<<endl;
    }
    


};

int main(){

    Complex c1(3,7);
    Complex c2(2,1);

    Complex c3 = c1+c2;
    c3.display();

}