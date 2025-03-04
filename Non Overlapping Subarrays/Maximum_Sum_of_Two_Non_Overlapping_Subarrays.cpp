#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int> nums = {0,6,5,2,2,5,1,9,4};
    int firstLen = 1, secondLen = 2;

    int n = nums.size();
    vector<int> dp_1(n);
    vector<int> dp_2(n);
    int sum = 0;

    // left to right

    for(int i=0;i<firstLen;i++){
        sum += nums[i];
    }

    dp_1[firstLen-1] = sum;

    for(int i=firstLen, j = 0 ; i<n ; i++, j++ ){
        sum += nums[i] - nums[j];
        dp_1[i] = max(sum, dp_1[i-1]);
    }

    // right to left
    sum = 0;

    for(int i=n-1; i >= n - secondLen ;i--){
        sum += nums[i];
    }

    int idx = n - secondLen;

    dp_2[idx] = sum;
    

    for(int i=n-secondLen -1 , j = n-1 ; i>=0 ; i--, j-- ){
        sum += nums[i] - nums[j];
        dp_2[i] = max(sum, dp_2[i+1]);
    }

    int ans_1 = 0;

    for(int i=firstLen-1 ; i < n - secondLen ; i++){
        ans_1 = max(ans_1, dp_1[i] + dp_2[i+1]);
    }

    cout<<ans_1<<endl;

    // Second order------------------------------------------------->

    vector<int> dp_3(n);
    vector<int> dp_4(n);
    sum = 0;

    // left to right

    for(int i=0;i<secondLen;i++){
        sum += nums[i];
    }

    dp_3[secondLen-1] = sum;
    idx = secondLen;

    for(int i=secondLen, j = 0 ; i<n ; i++, j++ ){
        sum += nums[i] - nums[j];
        dp_3[i] = max(sum, dp_3[i-1]);
    }

    // right to left
    sum = 0;

    for(int i=n-1; i >= n - firstLen ;i--){
        sum += nums[i];
    }

    idx = n - firstLen;

    dp_4[idx] = sum;

    for(int i=n-firstLen -1 , j = n-1 ; i>=0 ; i--, j-- ){
        sum += nums[i] - nums[j];
        dp_4[i] = max(sum, dp_4[i+1]);
    }

    int ans_2 = 0;

    for(int i=secondLen-1 ; i < n - firstLen ; i++){
        ans_2 = max(ans_2, dp_3[i] + dp_4[i+1]);
    }

    
    cout<<ans_2<<endl;

    cout<<max(ans_1, ans_2)<<endl;
    
}