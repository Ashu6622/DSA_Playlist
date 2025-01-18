array => 1 2 1 3 4
note --> number of subarrays till current index is equal to j-i+1
j = ending index,  i = starting index

Important 
find the subarrays with k different integers, this type of problem is solved by
finding subarrays with integers <=k and <=k-1,  and then count_1 for <=k and count_2 for <=k-1  
count1 - count2 == this will equal to subarray with k integers

Important
Minimum Operations to Reduce X to Zero => this problem can be solved using the approach to find the longest subarray with sum equal to X, this X is equal to total_sum of array minus k, the value of k is given, the final answer will be total length minus longest subarray length
