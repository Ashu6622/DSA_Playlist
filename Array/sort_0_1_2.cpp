#include<bits/stdc++.h>
using namespace std;

// low ->will alway point to 0
// mid -> alway points to 1
// end -> always points to 2

int main(){

    vector<int> vec = {2,2,0,1,1,0,0,1};

    int low = 0;
    int mid = 0;
    int end = vec.size()-1;

    // always mid pointer will swap either with low or end

    while(mid <= end){

            if(vec[mid] == 0){
                    swap(vec[low] , vec[mid]);  
                    low++;
                    mid++;
            }
            else if(vec[mid] == 1){
                    mid++;
            }
            else{
                    swap(vec[mid], vec[end]);
                    end--;
            }
    }

    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
}