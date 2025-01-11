haystack and needle problem i.e searching needle in haystack
Example-> haystack = "a a e a a c d a a e"
          needle =   "a a e a a d"

          searching needle in the haystack
          using KMP algorithm of (longest common prefix-suffix)
          LPS(longest prefix suffix)  of the needle
          LPS of needle "aaeaad" = [0 1 0 1 2 0]

          first pointer pointing at haystack
          second pointer pointing at needle

          while matching needle with the haystack , the characters are similar till index 4 and  dissimilar at index 5, so in normal searching  pattern algorithm when disimilar character are encounters then we are moving the second pointer of needle again to 0 and first pointer of  haystack will move to the index just after the index of the haystack from where the comparison started i.e first pointer will move to index 1 of haystack ("a a e a a c d a a e"), as comparison was started from index 0.
          But in KMP algorithm we are not directly moving to the starting index, first we are checking is there any common suffix-prefix, by moving to the index present at the LPS vector, we move to the index where the common prefix end, in this example 'd' and 'c' are not same, so we do
          second pointer = LPS[index of 'd' - 1], this will give the common prefix and suffix till that index, so we move to the index 2, and now we will compare the character at index 2, if the character at index 2 is also not matches with the 'c' i.e at index 2 'e' present, so again i will move to
          second pointer = LPS[index of 'e' - 1] i.e at index 0, from here no more backward tracking as we reached to 0, and if the caracter at index 0 matches then both pointer will increase by one, and the comparison will continue, but if the characters not matches, then increment the first pointer and match with other characters and this will continue till whole string matches

          Important Example-> haystack = a a e a a e a a d
                              needle   = a a e a a d

        Important Note--> We never move back in main String, we always move back in secondary string in KMP
        algorithm
