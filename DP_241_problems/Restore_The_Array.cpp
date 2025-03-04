     #include<bits/stdc++.h>
     using namespace std;

     int solve(int idx, string &S, int k){

        if(idx >= S.length()){
            return 1;
        }

        if(S[idx] == '0'){
            return 0;
        }

        int totalCount = 0;
        long long val = 0;

        for(int i=idx; i< S.length(); i++){

             val = val*10 + (S[i] - '0');

            if(val > k){
                return totalCount;
            } 
            int sum = solve(i+1, S, k);
            totalCount += sum;
        }
        return totalCount;
     }

     int main(){

        string S = "1000";
        int k = 1000;

        int result = solve(0, S, k);

        cout<<result<<endl;
     }