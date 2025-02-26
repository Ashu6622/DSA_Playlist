#include<bits/stdc++.h>
using namespace std;

bool isPossible(vector<int>& time, int minTime, int k){

    int countTrip = 0;

    for(int i=0;i<time.size();i++){
        countTrip += minTime/time[i];
    }

    return countTrip >= k;
}

int main(){

    vector<int> time = {3};
    int k = 4;

    int start = 1;
    int end = *min_element(time.begin(), time.end())*k;

    int minTime = 0;

    while(start <= end){

        int mid = (start+end)/2;

        if(isPossible(time, mid, k)){
                minTime = mid;
                end = mid-1;
        }   
        else{
            start = mid+1;
        }
    }

    cout<<minTime<<endl;

}