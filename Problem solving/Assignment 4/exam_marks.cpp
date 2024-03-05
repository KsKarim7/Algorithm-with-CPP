#include <bits/stdc++.h>
using namespace std;

int dp[1005][1005];

bool if_get(int n, int s, int arr[])
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
        bool option1 = if_get(n - 1, s - arr[n - 1], arr);
        bool option2 = if_get(n - 1, s, arr);
        return dp[n][s] = option1 || option2;
    }
    else
    {
        return dp[n][s] = if_get(n - 1, s, arr);
    }
}

int main()
{
    int t, n, m;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> m;
        int arr[n];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        if (m == 1000)
        {
            cout << "YES" << endl;
        }
        else
        {
            int s = 1000 - m;
            for (int i = 0; i <= n; i++)
            {
                for (int j = 0; j <= s; j++)
                {
                    dp[i][j] = -1;
                }
            }
            if (if_get(n, s, arr))
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}