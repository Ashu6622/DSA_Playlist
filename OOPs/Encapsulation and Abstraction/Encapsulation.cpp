#include<bits/stdc++.h>
using namespace std;


class Geometry{
    private:  //no direct access to the data member
    int r;

    public:

    void set(int n){
        this->r = n;
    }

    int get(){
        return r;
    }

    
};

int main(){

    Geometry g1;
    g1.set(3);
    cout<<g1.get()<<endl;


}