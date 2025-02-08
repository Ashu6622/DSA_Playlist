#include<bits/stdc++.h>
using namespace std;

void solve(int index, string &s, string& temp, map<int,string>& mp){

	if(index == s.length()){
		cout<<temp<<endl;
		return;
	}

	string str = mp[s[index]-'0'];
    // cout<<str<<endl;

	for(int i=0;i<str.length();i++){

		temp.push_back(str[i]);
		solve(index+1, s, temp, mp);
		temp.pop_back();
	} 
}

int main(){

    string s = "23";

    map<int,string> mp;

	mp[2] = "abc";
	mp[3] = "def";
	mp[4] = "ghi";
	mp[5] = "jkl";
	mp[6] = "mno";
	mp[7] = "pqrs";
	mp[8] = "tuv";
	mp[9] = "wxyz";

	// vector<string> output;
	string temp = "";

	solve(0, s, temp, mp);

}