#include<bits/stdc++.h>
using namespace std;

class Math{

    private:
    int r;

    public:

    void set(int n){
       this->r = n;
    }

    int area(){
        return r*r;
    }
};

int main(){

        Math m1;
        Math m2;

        m1.set(10);
        m2.set(14);
        cout<<m1.area()<<endl;
        cout<<m2.area()<<endl;

}