#include <bits/stdc++.h>

using namespace std;

int dp[1005][1005];

int LPS(string s, int n, string ss, int m)
{
    if (n == 0 || m == 0)
    {
        return 0;
    }
    if (dp[n][m] != -1)
    {
        return dp[n][m];
    }
    if (s[n - 1] == ss[m - 1])
    {
        return dp[n][m] = LPS(s, n - 1, ss, m - 1) + 1;
    }
    else
    {
        int one = LPS(s, n - 1, ss, m);
        int two = LPS(s, n, ss, m - 1);
        return dp[n][m] = max(one, two);
    }
}

int main()
{
    // Write your code here
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s, ss;
        cin >> s;
        ss = s;
        reverse(ss.begin(), ss.end());
        int n = s.size();
        int m = ss.size();
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= m; j++)
            {
                dp[i][j] = -1;
            };
        }
        cout << n - LPS(s, n, ss, m) << endl;
    }

    return 0;
}
