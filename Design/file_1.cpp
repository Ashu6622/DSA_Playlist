#include<bits/stdc++.h>
using namespace std;

class Block{

    vector<int> nums;
    unordered_map<int,int> mp;
    public:

    Block(){
    }

    void insert(int val){
            mp[val] = nums.size();
            nums.push_back(val);
    }

    void deleteVal(int val){

       int idx_1 = mp[val];
       int idx_2 = mp.size()-1;
       swap(nums[idx_1], nums[idx_2]);
       mp[nums.back()] = idx_1;
       nums.pop_back();
    }

    int getRandom(){

        int n = nums.size();

        int idx = rand()%n;

        return nums[idx];
    }

};

int main(){

    Block B1;

    B1.insert(1);
    B1.insert(4);
    B1.insert(2);
    B1.insert(6);
    B1.insert(3);
    B1.insert(5);
    // cout<<B1.getRandom()<<endl;
    // B1.deleteVal(5);
    cout<<B1.getRandom()<<endl;



}