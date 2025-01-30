#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> vec = {1,2,3,4,5,4,5,6};
    int n = vec.size();
    vector<int> output;
    int k = 3;


    int count = 1; //this count will increase when the condition satisfy and decrease to 1 when the condition is not satisfied

    int i=0;
    int j=1;

    while(j < n){

        if(vec[j] == vec[j-1]+1){  //when the condition is satisfied
            count++;     
        }
        else{
            count = 1;  //when condition is not satisfied
        }

        if(j-i+1 == k){
            if(count >= k){
                output.push_back(vec[j]);
            }
            else{
                output.push_back(-1);
            }
        i++;
        }
        j++;
    }

    for(int i=0;i<output.size();i++){
        cout<<output[i]<<" ";
    }
}