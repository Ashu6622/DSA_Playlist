#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        

        string common = strs[0];

        for(int i=1;i<strs.size();i++){

                string temp = common;
                common = "";
                string s = strs[i];

                int j = 0;
                while(j < temp.length() && j < s.length()){

                    if(temp[j] == s[j]){
                        common += s[j];
                        j++;
                    }
                    else{
                        break;
                    }

                }
                

        }

        return common;
    }
};