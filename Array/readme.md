Type of subarray problems on sliding window technique
1) length of subarray
2) count subarrays

in Count subarray problem we usually do prefix sum concept, i.e storing the sum till every index, and find if the (sum-k) has already occure or not

Prefix Minimum and Prefix Maximum-->
Prefix minimum is the minimum till that index, including the current index
Prefix maximum is the maximum till that index, including the current index
example ->  [2 1 0 5 3]
             2 2 2 5 5  -> prefix till index from left to right
             5 5 5 5 3  -> prefix till index from right to left            
