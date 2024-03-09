#include <bits/stdc++.h>
using namespace std;

int dp[1005][1005];

int rod_cutter(int n, int s, int val[], int w[])
{
    if (n == 0 || s == 0)
    {
        return 0;
    }
    if (dp[n][s] != -1)
    {
        return dp[n][s];
    }
    if (w[n - 1] <= s)
    {
        int choice1 = val[n - 1] + rod_cutter(n, s - w[n - 1], val, w);
        int choice2 = rod_cutter(n - 1, s, val, w);
        return dp[n][s] = max(choice1, choice2);
    }
    else
    {
        return dp[n][s] = rod_cutter(n - 1, s, val, w);
    }
}

int main()
{
    int n;
    cin >> n;
    int v[n], w[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        w[i] = i + 1;
    }
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            dp[i][j] = -1;
        }
    }
    cout << rod_cutter(n, n, v, w);

    return 0;
}