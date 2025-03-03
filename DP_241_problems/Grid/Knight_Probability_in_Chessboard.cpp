#include<bits/stdc++.h>
using namespace std;

double solve(int n, int i, int j, int k){

    if(i >= n || j >= n || i < 0 || j < 0){
        return 0.0;
    }

    if(k == 0){
        return 1.0;
    }

    double dr1 = solve(n, i-2, j-1, k-1);
    double dr2 = solve(n, i-2, j+1, k-1);
    double dr3 = solve(n, i-1, j-2, k-1);
    double dr4 = solve(n, i-1, j+2, k-1);
    double dr5 = solve(n, i+1, j-2, k-1);
    double dr6 = solve(n, i+1, j+2, k-1);
    double dr7 = solve(n, i+2, j-1, k-1);
    double dr8 = solve(n, i+2, j+1, k-1);

    double prob = (double)(dr1 + dr2 + dr3 + dr4 + dr5 + dr6 + dr7 + dr8)/8.0;
    return prob;

}

int main(){

    int n = 3;
    int r = 0;
    int c = 0;
    int k = 2;

    double result = solve(n, r, c, k);

    cout<<result<<endl;
}