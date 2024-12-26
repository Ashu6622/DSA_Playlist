What is subsequence ?
--> if x is a subsequence of y then all characters of x should be present in y, and in same order.
Example x = "adk" , y = "hatidpkq"
here characters can occur multiple times

so-> x = "adk" and y = "hatidpkq", now x is a subsequence of y, because every characters of x appears in y and in same order i.e 'd' 
comes after 'a' , 'k' comes after 'a' and 'd' and like wise


What is String matching ?
-> in string matching problem their is always two options weather the characters are matches or not matches, if the characters are matches then we move both the pointers, and if not matches then only one pointer
Example s1 = "bananas"
        s2 = "nas"
        search s2 in s1, if the characters are matches then move both the pointers of s1 and s2, and if not matches then increase only s1 pointer, and at last if s2 pointer point outside the string s2, then s2 is present in s1