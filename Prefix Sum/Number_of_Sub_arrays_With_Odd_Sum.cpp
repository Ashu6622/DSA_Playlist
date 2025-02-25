#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> vec = {1, 2, 3, 4, 5, 6, 7};

    int n = vec.size();
    vector<int> prefSum(n, -1);

    prefSum[0] = vec[0];

    for(int i=1;i<n;i++){

        prefSum[i] = vec[i] + prefSum[i-1];
    }

    for(int i=0;i<prefSum.size();i++){
        cout<<prefSum[i]<<" ";
    }
    cout<<endl;

    int countOdd = 0;
    int countEven = 0;
    int countSubarrays = 0;

    for(int i=0;i<prefSum.size();i++){
            
            if(prefSum[i]%2 == 0){
                countSubarrays += countOdd;
                countEven++;
            }
            else{
                countSubarrays += countEven + 1;  //plus one because this prefix is itself odd
                countOdd++;
            }
    }

    cout<<countSubarrays<<endl;

}