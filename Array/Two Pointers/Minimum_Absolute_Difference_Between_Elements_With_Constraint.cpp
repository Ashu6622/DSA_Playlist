#include<bits/stdc++.h>
using namespace std;

// using set

class Solution{

    public:

    int solve(vector<int>& nums, int k){
        set<int> st;
        int minDiff = INT_MAX;

        // i - k window should be maintain   

        for(int i = k;i<nums.size();i++){

            st.insert(nums[i-k]);

            auto it = st.lower_bound(nums[i]);

            // check if the value presnt in the set or not
            // if the value is present then will get the same value otherwise we will get the next greater element
            // and if the element which we are searching in the set is greater then all the elements present in the set, then it will return the iterator just after yhe last element

            if(it != st.end()){  //if equal or greater element is present
                minDiff = min(minDiff, abs(nums[i] - *it));
            }
            
            if (it != st.begin()){  //if it point to greater element then it can have smaller element also
                it--; //bring the iterator to the last element, which was pointing just after the last element
                minDiff = min(minDiff, abs(nums[i] - *it));
            }

        }

        return minDiff;
    }
};


int main(){

    Solution S;

    int k = 3;
    vector<int> vec = {1,2,3,4};

    int result = S.solve(vec, k);

    cout<<result<<endl;

    

}