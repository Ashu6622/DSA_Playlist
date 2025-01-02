#include<bits/stdc++.h>
using namespace std;

// concept of prefixmaximum from left to right, right to left
// calculate the water trap on every index, and add total
// how to calculate the water trap on every index => minimum(leftPrefixMaximum , rightPrefixMaximum) - current_element

// brute approach to calculate the left and right maximum element till 0th and last index from current index

vector<int> leftCall(vector<int> &height, int n){

    vector<int> left(n, -1);

    int maximum = INT_MIN;
    for(int i=0;i<n;i++){
        left[i] = max(height[i],maximum);
        maximum = left[i];
    }

    return left;
    
}
vector<int> rightCall(vector<int> &height, int n){

    vector<int> right(n, -1);

    int maximum = INT_MIN;
    for(int i=n-1;i>=0;i--){
        right[i] = max(height[i],maximum);
        maximum = right[i];
    }

    return right;

}
int main(){
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};

    int n = height.size();

    vector<int> leftMax(n,-1);
    vector<int> rightMax(n,-1);

    leftMax = leftCall(height, n);
    rightMax = rightCall(height, n);

    int total = 0;

    for(int i=0;i<n;i++){

        total += min(leftMax[i] , rightMax[i]) - height[i];
    }

    cout<<total<<endl;
}