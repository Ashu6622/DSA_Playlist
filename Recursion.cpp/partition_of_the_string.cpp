#include<bits/stdc++.h>
using namespace std;

void partitionString(string s, int start) {
    int n = s.size();
    if (start >= n) return; // Base case: Stop if start index exceeds string size

    for (int i = start; i < n; i++) {
        string left = s.substr(start, i - start + 1);
        string right = s.substr(i + 1);

        // Print the current partition
        cout << left << " | " << right << endl;
      

        // Recur on the right part
        partitionString(s, i + 1);
    }
}

int main(){

        string S = "1296";

        partitionString(S, 0);


}