#include<bits/stdc++.h>
using namespace std;

// intuition behind range of the answer
// if only one bus is available to complete all the trips, then total time taken to complete all the trips will be => time_taken_by_bus*no_of_trip
// range of answer => (1 ----- min_time*trip)

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