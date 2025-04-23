// There are n applicants and m free apartments. Your task is to distribute the apartments so that as many applicants as possible will get an apartment.
// Each applicant has a desired apartment size, and they will accept any apartment whose size is close enough to the desired size.
// Input
// The first input line has three integers n, m, and k: the number of applicants, the number of apartments, and the maximum allowed difference.
// The next line contains n integers a_1, a_2, \ldots, a_n: the desired apartment size of each applicant. If the desired size of an applicant is x, they will accept any apartment whose size is between x-k and x+k.
// The last line contains m integers b_1, b_2, \ldots, b_m: the size of each apartment.
// Output
// Print one integer: the number of applicants who will get an apartment.
// Constraints

// 1 \le n, m \le 2 \cdot 10^5
// 0 \le k \le 10^9
// 1 \le a_i, b_i \le 10^9

// Example
// Input:
// 4 3 5
// 60 45 80 60
// 30 60 75

// Output:
// 2

#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> appt = {60, 45, 80, 60};
    vector<int> apptSize = {30, 60, 75};

    int k = 5;

    sort(appt.begin(), appt.end());
    sort(apptSize.begin(), apptSize.end());

    int i=0;
    int j=0;
    int cnt = 0;

    while(i < appt.size() && j < apptSize.size()){

        if(apptSize[j] >= appt[i]-k && apptSize[j] <= appt[i]+k){
            i++;
            j++;
            cnt++;
        }
        else if(apptSize[j] < appt[i]-k){
            j++;
        }
        else if(apptSize[j] > appt[i]+k){
            i++;
        }
    }

    cout<<cnt<<endl;
}