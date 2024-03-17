#include <bits/stdc++.h>
using namespace std;
const int N = 1e9 + 7;

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
            cout << "1" << endl;
        }
        else
        {
            int s = 1000 - m;
            long long dp[n + 1][s + 1];
            dp[0][0] = 1;
            for (int i = 1; i <= s; i++)
            {
                dp[0][i] = 0;
            }
            for (int i = 1; i <= n; i++)
            {
                for (int j = 0; j <= s; j++)
                {
                    if (arr[i - 1] <= j)
                    {
                        dp[i][j] = (dp[i][j - arr[i - 1]] + dp[i - 1][j]) % N;
                    }
                    else
                    {
                        dp[i][j] = (dp[i - 1][j]) % N;
                    }
                }
            }
            cout << dp[n][s] << endl;
               }
    }
    return 0;
}