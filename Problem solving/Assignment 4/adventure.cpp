#include <bits/stdc++.h>
using namespace std;

int dp[1001][1001];

int knapsack(int n, int tw, int vv[], int ww[])
{
    if (n == 0 || tw == 0)
    {
        return 0;
    }
    if (dp[n][tw] != -1)
    {
        return dp[n][tw];
    }
    if (ww[n - 1] <= tw)
    {
        int option1 = knapsack(n - 1, tw - ww[n - 1], vv, ww) + vv[n - 1];
        int option2 = knapsack(n - 1, tw, vv, ww);
        return dp[n][tw] = max(option1, option2);
    }
    else
    {
        return dp[n][tw] = knapsack(n - 1, tw, vv, ww);
    }
}

int main()
{
    int t, n, tw;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> tw;
        int ww[n], vv[n];
        for (int j = 0; j < n; j++)
        {
            cin >> ww[j];
        }
        for (int j = 0; j < n; j++)
        {
            cin >> vv[j];
        }
        // for (int j = 0; j < n; j++)
        // {
        //     cout << ww[j] << " " << vv[j] << endl;
        // }
        for (int i = 0; i <= 1000; i++)
        {
            for (int j = 0; j <= 1000; j++)
            {
                dp[i][j] = -1;
            }
        }
        cout << knapsack(n, tw, vv, ww) << endl;
    }
    return 0;
}