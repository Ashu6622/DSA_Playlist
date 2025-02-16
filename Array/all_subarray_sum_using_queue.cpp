#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> nums = {1,2,3,4,5,8,9,78,65,12,34,32};

    queue<pair<int,int>> q;

    int n = nums.size();
    int count = 0;

    for(int i=0;i<n;i++){
        q.push({nums[i],i});
    }

    while(!q.empty()){

        auto p = q.front();
        q.pop();
        cout<<p.first<<" ";

        int sum = p.first;
        int idx = p.second;
        count++;

        if(idx == n-1){
            continue;
        }

        sum += nums[idx+1];
        idx += 1;

        q.push({sum, idx});

    }
    cout<<endl;
    int count2 = 0;

    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=i;j<n;j++){
                sum += nums[j];
                cout<<sum<<" ";
                count2++;
        }
    }
    cout<<endl;

    cout<<count<<endl;
    cout<<count2<<endl;
}