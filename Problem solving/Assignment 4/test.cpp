#include <bits/stdc++.h>
using namespace std;
int dp[1005][1005];

bool make_it(int n, int s, int arr[])
{
    if (n == 0)
    {
        if (s == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    if (dp[n][s] != -1)
    {
        return dp[n][s];
    }

    if (arr[n - 1] <= s)
    {
        bool option1 = make_it(n - 1, s - arr[n - 1] + 3, arr);
        bool option2 = make_it(n - 1, s - arr[n - 1] * 2, arr);
        return dp[n][s] = option1 || option2;
    }
    else
    {
        return dp[n][s] = make_it(n - 1, s, arr);
    }
}
