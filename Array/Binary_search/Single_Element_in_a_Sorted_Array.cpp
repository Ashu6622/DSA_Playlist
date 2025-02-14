#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> arr = {3,3,7,7,10,11,11};

    int s = 0;
    int e = arr.size()-1;

    while(s <= e){

        int mid = (s+e)/2;

        if(mid == 0 || mid == arr.size()-1){
            cout<<arr[mid]<<endl;
            break;
        }

        if(arr[mid] != arr[mid-1] && arr[mid+1] != arr[mid]){
            cout<<arr[mid]<<endl;
            break;
        }

        if(mid%2 == 0){  //for odd number of element, as it is a zero based indexing
                
            if(arr[mid+1] != arr[mid]){
                    e = mid;
            }
            else{
                    s = mid;
            }
        }
        else{  //for even number of element, as it is a zero based indexing

            if(arr[mid+1] != arr[mid]){
                    s = mid+1;
            }
            else{
                e = mid-1;
            }
        }
    }

}