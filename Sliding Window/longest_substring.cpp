// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//     string s = "amazonservices";

//     map<char,int> mp1;
//     map<char, int> mp2;

//     for(int i=0;i<s,length();i++){
//         mp1[s[i]]++;
//     }

//     int maxLength = 0;

//     for(int i=0; )
// }

#include <iostream>
#include <unordered_set>
#include <string>

std::string longestUniqueSubstring(const std::string& s) {
    int n = s.size();
    std::string result = "";

    // Iterate through all possible substrings, excluding the whole string
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {  // Changed j <= n to j < n
            std::string sub = s.substr(i, j - i);
            std::unordered_set<char> inside(sub.begin(), sub.end());
            std::unordered_multiset<char> outside;
            
            // Collect characters outside the substring
            for (int k = 0; k < i; ++k) outside.insert(s[k]);
            for (int k = j; k < n; ++k) outside.insert(s[k]);
            
            // Ensure no character in 'inside' appears in 'outside'
            bool isValid = true;
            for (char c : inside) {
                if (outside.find(c) != outside.end()) {
                    isValid = false;
                    break;
                }
            }
            
            // Update result if valid and longer
            if (isValid && sub.length() > result.length()) {
                result = sub;
            }
        }
    }
    return result;
}

int main() {
    std::string input ="amazonservices";
  
    
    std::string result = longestUniqueSubstring(input);
    if (!result.empty()) {
        std::cout << "Longest valid substring: " << result << std::endl;
    } else {
        std::cout << "No valid substring found." << std::endl;
    }
    return 0;
}

