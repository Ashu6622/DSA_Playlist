#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> nums = {{0, 1, 0}, {0, 0, 0}, {0, 1, 0}};

    //approach-> asked every two person weather they know each other or not, here indexs are person, and if the person know other then it can't be the celebrity
    // if between 0 and 1 , 0 knows 1 but 1 don't know 0 then 1 can be celebrity so take 1 and forward with next person(index) and don't take 0, and same for 0, but if both know each other or both don't know each other then they both can't be the celebrity, so start new iteration with both new person(indexs)

   stack<int> st;
   int n = nums.size();

   for(int i=0;i<n;i++){
        st.push(i);
   }

    while(st.size() > 1){

        int a = st.top();
        st.pop();
        int b = st.top();
        st.pop();

        if(nums[a][b] == 1 && nums[b][a] == 0){  
            // here 'b' can be celebrity so push 'b' again into stack to check with others
            st.push(b);
        }
        else if(nums[a][b] == 0 && nums[b][a] == 1){
            // here 'a' can be celebrity so push 'a' again into stack to check with others
            st.push(a);
        }
    }

    if(st.size() == 0){
        cout<<-1<<endl;
        return 0;
    }

    int isCelebrity = st.top();
    
    int s_rows = 0;
    for(int i=0;i<n;i++){  //check for row
        s_rows += nums[isCelebrity][i];
    }

    int s_cols = 0;  //check for column
    for(int i=0;i<n;i++){
        s_cols += nums[i][isCelebrity];
    }

    if(s_rows == 0 && s_cols == n-1){
        cout<<"Celebrity "<<isCelebrity<<endl;
        return 0;
    }

    cout<<-1<<endl;

    return 0;
}