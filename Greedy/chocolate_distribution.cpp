#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> packets = {3, 4, 1, 9, 56, 7, 9, 12};
    int m = 5;

      sort(packets.begin(), packets.end());
        
  
       int i = 0;
       int j = m-1;
       
       int minDiff = INT_MAX;
       
       while(j < packets.size()){
            
            minDiff = min(minDiff, packets[j] - packets[i]);
            i++;
            j++;
       }
       
      cout<<minDiff<<endl;

}