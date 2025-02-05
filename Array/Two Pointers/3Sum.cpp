#include<bits/stdc++.h>
using namespace std;

int main(){

        vector<int> nums = {-1,0,1,2,-1,-4};

        sort(nums.begin(), nums.end());

        vector<vector<int>> output;

        for(int i=0;i<nums.size()-3;i++){

            // skip the similar values
            if(i > 0 && nums[i] == nums[i-1]){
                continue;
            }

            // a + b + c = 0;
            // a + b = -c;
            // find a + b
            
            int n = -nums[i];  //we have to search for opposite value
            int start = i+1;
            int end = nums.size()-1;
            vector<int> temp;

            while(start < end){

                if(nums[start] + nums[end] > n){
                        end--;
                }
                else if(nums[start] + nums[end] < n){
                        start++;
                }
                else{
                    
                    // avoid the similar values from starting
                    while(start < end && nums[start] == nums[start+1]){
                            start++;
                    }
                    // avoid the similar values from end
                    while(start < end && nums[end] == nums[end-1]){
                            end--;
                    }

                    temp.push_back(-n);
                    temp.push_back(nums[start]);
                    temp.push_back(nums[end]);
                    output.push_back(temp);
                    temp.clear();
                    start++;
                    end--;
                }
            }

        }

        for(int i=0;i<output.size();i++){

            for(int j=0;j<3;j++){
                cout<<output[i][j]<<" ";
            }

            cout<<endl;
        }
}