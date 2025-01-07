#include <bits/stdc++.h>
using namespace std;

// to find the smallest numnber of D digits
// if D = 4, i.e 4 digit number
// _ _ _ _ , if the number to be smallest then the first digit should always start with 1, followed with 0's and at the end non zero numbers should be placed

int main()
{

    int S = 16;
    int D = 1;

    if (S > 9 * D)
    {
        cout<<"-1"<<endl;
        return 0;
    }

    vector<int> nums(D, 0);

    S -= 1; // reduce 1 for 1st place

    int i = D - 1;

    while (i > 0)
    {

        if (S >= 9)
        {
            nums[i] = 9;
            S -= 9;
        }
        else
        {
            nums[i] = S;
            S -= S;
        }

        if (S == 0)
        {
            break;
        }
        i--;
    }

    nums[0] = 1 + S;

    string ans = "";

    for (int i = 0; i < D; i++)
    {
        ans += nums[i] + '0';
    }

    cout<<ans<<endl;
}