#include<bits/stdc++.h>
using namespace std;

// size of class

class A{

};

class B{ 
    public:
    char a;
    char b;
};

class C{ 
    public:
    char a;
    char b;
    int c;
};

class D{ 
    public:
    char a;
    int c;
    char b;
};

class E{ 
    public:
    char a;
    char b;
    double d;
    int c;
};



int main(){
    cout<<sizeof(A)<<endl;
    cout<<sizeof(B)<<endl;
    cout<<sizeof(C)<<endl;
    cout<<sizeof(D)<<endl;
    cout<<sizeof(E)<<endl;
}
