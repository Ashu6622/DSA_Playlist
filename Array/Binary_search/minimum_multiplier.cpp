#include<bits/stdc++.h>
using namespace std;

bool isValid(int n, vector<int>& arr, int k){

        int sum = 0;
        
        for(int i=0;i<arr.size();i++){
            sum += arr[i]/n;
        }

        return sum <= k;
}
int main(){

    vector<int> arr = {1,5,7};

    int k = 8;

    int s = 1;
    int e = *max_element(arr.begin(), arr.begin());
    int ans = -1;

    while(s < e){

        int mid = (s+e)/2;

        // if this is possible then I will look for more smaller possible ans
        if(isValid(mid,arr,k)){
            ans = mid;
            e = mid-1;
        }
        else{  //if not possible then so move to the greater number
            s = mid+1;
        }
    }   

    cout<<ans<<endl;
    return 0;
}