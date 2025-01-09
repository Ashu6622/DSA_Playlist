#include<bits/stdc++.h>
using namespace std;

// Given a string containing just the characters '(' and ')', return the length of the longest valid (well-formed) parentheses 
// substring


// Example 1:

// Input: s = "(()"
// Output: 2
// Explanation: The longest valid parentheses substring is "()".
// Example 2:

// Input: s = ")()())"
// Output: 4
// Explanation: The longest valid parentheses substring is "()()".

int main(){
    string exp = ")()(()()()()";

    int close = 0;
    int open = 0;
    int maxLength = 0;

    // from left to right

    for(int i=0;i<exp.length();i++){

            if(exp[i] == '('){ 
                open++;
            }
            else{
                close++;
            }

            //  if both the open and close brackets are equal then it is a valid parentheses, so update the maxLength, so length will twice the open brackets, as the parentheses are valid so close == open
            if(open == close){  
                maxLength = max(maxLength, 2*open);
            }
            
            // when the close becomes more then open then the parentheses are not valid , so reset values
            if(open < close){
                open = 0;
                close = 0;
            }
    }

    open = 0;
    close = 0;

    // from right to left
    // here open = ')' and close = '(' brackets

   for(int i = exp.length()-1 ; i>=0 ; i--){

            if(exp[i] == ')'){
                open++;
            }
            else{
                close++;
            }

            if(open == close){
                maxLength = max(maxLength, 2*open);
            }

            if(open < close){
                open = 0;
                close = 0;
            }
    }

    cout<<maxLength<<endl;

}