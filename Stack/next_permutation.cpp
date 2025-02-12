#include<bits/stdc++.h>
using namespace std;

// using stack
// without using stack on GFG

// to find next permutation
// first find the first next greater element from right to left
// Once we find the element having the greater element on its right, so from that index find the element which is least greater till last index, then swap both element and sort from index+1 to end

int main(){

    vector<int> nums = {5,3,4,9,7,6};

    stack<int> st;  //store the index
    int n = nums.size();

    int idx_1 = -1;
    int idx_2 = -1;

    for(int i = n-1; i>=0 ; i--){

        if(!st.empty() && nums[st.top()] > nums[i]){

            while(!st.empty() && nums[st.top()] > nums[i]){
                 st.pop();
            }

            if(!st.empty()){
                idx_2 = st.top()-1;
                idx_1 = i;
            }
            else{
                idx_2 = n-1;
                idx_1 = i;
            }
            break;
        
        }
        else{
            st.push(i);
        }
    }

    if(idx_2 == -1){
        cout<<"No Next Greater"<<endl;
        return 0;
    }

    swap(nums[idx_1], nums[idx_2]);

    sort(nums.begin()+idx_1+1, nums.end());

    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }

    return 0;
}