#include<bits/stdc++.h>
using namespace std;

    /*break the string in such a way that ythe substring which is formed after breaking the string should be 
    present in the dictionary vector, if not possible ten return the false;*/

bool solve(int j, string s, set<string>& st){

        if(j >= s.length()){
            return true;
        }

        string temp = "";

        for(int i = j; i<s.length() ; i++){

                temp += s[i];

                  //if this part of string is present then break the whole from string here  only and form other substring and see if it present or not
                  if(st.find(temp) != st.end()){

                    bool result = solve(i+1, s, st);

                    if(result){
                        return true;
                    }
                  }
        }

        return false;
}

int main(){

        string s = "catsandog";
        vector<string> dict = {"cat" , "cats" , "sand" , "dog", "and"};

        set<string> st(dict.begin(), dict.end());

        bool result = solve(0, s, st);  //start from index 0;

        cout<<result<<endl;
}