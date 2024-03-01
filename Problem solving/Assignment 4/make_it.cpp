#include <bits/stdc++.h>
using namespace std;

bool make_it(int n, vector<bool> &dp)
{
    if (dp[n])
    {
        return true;
    }
    if (n == 0)
    {
        return false;
    }
    bool option1 = make_it(n - 3, dp);
    bool option2 = make_it(n / 2, dp);
    return dp[n] = (option1 || option2);
}

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<bool> dp(n + 1, false);
        dp[0] = true;
        if (make_it(n, dp))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
