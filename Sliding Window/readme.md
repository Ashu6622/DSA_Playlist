array => 1 2 1 3 4
note --> number of subarrays till current index is equal to j-i+1
j = ending index,  i = starting index

Important 
find the subarrays with k different integers, this type of problem is solved by
finding subarrays with integers <=k and <=k-1,  and then count_1 for <=k and count_2 for <=k-1  
count1 - count2 == this will equal to subarray with k integers

Important
Minimum Operations to Reduce X to Zero => this problem can be solved using the approach to find the longest subarray with sum equal to X, this X is equal to total_sum of array minus k, the value of k is given, the final answer will be total length minus longest subarray length

very important 
let a b are 2 numbers
if a&b == 0
then a^b = a+b


Most Important Topic of sliding window
--> Monotonic increasing and decreasing
1) stack
2) queue
3) dequeue

erase function in multiset is very important

whenever in the sliding window we are asked to fnd the count of the subarrays , then thik of
1) hashmap
2) prefixSum
2) two pointer

Important
1) Minimum Swaps to Group All 1's Together II
2) Minimum swaps and K together -> in this count all the elements less then and equal to k, then find the window which have maximum number of elements which are less then and equal to k
3) Find Two Non-overlapping Sub-arrays Each With Target Sum (leercode 1477)

