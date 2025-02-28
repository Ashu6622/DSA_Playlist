#include<bits/stdc++.h>
using namespace std;

int solve(int x, int n, int p){

    if(n == 0){
        return 0;
    }

    if(x > p){
        return 1e9;
    }

    int take = INT_MAX;

    if(n - x*x >= 0){
        take = solve(x, n-x*x, p)+1;
    }

    int nottake = solve(x+1, n, p);

    return min(take, nottake);
}

int main(){

    int n = 12;

    int p = sqrt(13)+1;

    int result = solve(1, n, p);

    cout<<result<<endl;
}