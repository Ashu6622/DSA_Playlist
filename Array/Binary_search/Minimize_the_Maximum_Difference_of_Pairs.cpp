#include<bits/stdc++.h>
using namespace std;

bool isPossible(vector<int>& arr, int diff, int p){

    
    int countPairs = 0;

    for(int i=0;i<arr.size()-1;i++){

        if(arr[i+1] - arr[i] <= diff){
            countPairs++;
            i++;
        }
    }

    return countPairs >= p;
}

int main(){

    vector<int> arr = {1,1,2,3,7,10};
    int n = arr.size();

    int p = 2;

    sort(arr.begin(), arr.end());

    int s = 0;
    int e = arr[n-1] - arr[0];
    int ans = INT_MAX;

    while(s <= e){

        int mid = (s+e)/2;

        if(isPossible(arr, mid, p)){
            ans = mid;
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }

    cout<<ans<<endl;
}