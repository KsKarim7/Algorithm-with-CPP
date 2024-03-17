#include <bits/stdc++.h>
using namespace std;

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
            cout << 0 << endl;
        }
        else
        {
            int s = 1000 - m;
            int dp[n + 1][s + 1];
            dp[0][0] = 0;
            for (int i = 1; i <= s; i++)
            {
                dp[0][i] = INT_MAX - 1;
            }
            for (int i = 1; i <= n; i++)
            {
                for (int j = 0; j <= s; j++)
                {
                    if (arr[i - 1] <= j)
                    {
                        dp[i][j] = min(1 + dp[i][j - arr[i - 1]], dp[i - 1][j]);
                    }
                    else
                    {
                        dp[i][j] = dp[i - 1][j];
                    }
                }
            }
            if (dp[n][s] == INT_MAX - 1)
            {

                cout << -1 << endl;
            }
            else
            {

                cout << dp[n][s] << endl;
            }
        }
    }
    return 0;
}