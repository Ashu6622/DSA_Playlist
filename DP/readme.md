Dp means try all possibilities and pick up the best one


Longest Increasing Subsequence
    1) length of LIS
    2) Count LIS
    3) Print LIS


Subsequence never repeate itself
example -> [3,5,4,7] ===> in this {3,4,7} is one of the subsequence, and it will never repeate i.e {3,4,7} as a subsequence will neve comes again

Note- in substring, subsequence problem which required to calculate the length,
 in this type of problem, we have option when the characters are not matching,
 so,when the characters are not matching then we will first move with first string , and then with the second string, and explore both the possibilties, but if the characters are match then we, just have to increment the count.
 if(s1[i] == s2[j]){
    return solve(i+1, j+1, s1, s2)+1;  //in this we just incrementing both the pointers, add including the character by adding 1
 }

 int include_i = solve(i+1,j s1, s2);
 int include_j = solve(i, j+1, s1, s2);
    return max(include_i, include_j);

Important conceptual
-> Count All Possible Routes (leetcode 1575)
in this question we can travel from start point to end point through multiple path
ex = [2,3,6,8,4], start = 1, finish = 3, fuel = 5
