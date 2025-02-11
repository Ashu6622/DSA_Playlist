#include<bits/stdc++.h>
using namespace std;

void fillnextSmaller(vector<int>& nums, vector<int>& nextSmaller){

    stack<int> st;
    st.push(-1);

    for(int i=nums.size()-1; i>=0; i--){

            while(st.top() != -1 && nums[st.top()] >= nums[i]){
                st.pop();
            }

            nextSmaller[i] = st.top();
            st.push(i);
    }


}

void fillprevSmaller(vector<int>& nums, vector<int>& prevSmaller){

    stack<int> st;
    st.push(-1);

    for(int i=0; i<nums.size(); i++){

        while(st.top() != -1 && nums[st.top()] > nums[i]){
                st.pop();
            }

            prevSmaller[i] = st.top();
            st.push(i);
    }

}

int main(){
    // approach => find the number of subarrays in which the current elemet is smallest
    // similar to Find largest rectangle in histogram
    // maintain two array of nextSmaller and previousSmaller, and store the index, from index we can find the number of subarrays

    // in this if we have duplicate element example [71,55,82,55] 55 is duplicate
    // then in nextSmaller iteration we will consider equal element also   >=
    // but in prevSmaller iteration we not take eqal element to avoid duplicates subarray  >

    vector<int> nums = {3,1,2,4};

    int n = nums.size();

    vector<int> nextSmaller(n);
    vector<int> prevSmaller(n);

    fillnextSmaller(nums, nextSmaller);
    fillprevSmaller(nums, prevSmaller);

    int totalSum = 0;

    for(int i=0;i<n;i++){

        if(nextSmaller[i] == -1){
            nextSmaller[i] = n;
        }

        int x = nextSmaller[i] - i;
        int y = i - prevSmaller[i];

        int totalSubarrays = (x*y);
        int sum = totalSubarrays*nums[i]; //sum of minimum in all subarrays

        totalSum += sum;
    }

    cout<<totalSum<<endl;
}