#include <bits/stdc++.h>
using namespace std;

int dp[1005][1005];

int unbounded_knapsack(int n, int s, int val[], int w[])
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
        int choice1 = val[n - 1] + unbounded_knapsack(n, s - w[n - 1], val, w);
        int choice2 = unbounded_knapsack(n - 1, s, val, w);
        return dp[n][s] = max(choice1, choice2);
    }
    else
    {
        return dp[n][s] = unbounded_knapsack(n - 1, s, val, w);
    }
}

int main()
{
    int n, s;
    cin >> n >> s;
    int val[n], weight[n];
    for (int i = 0; i < n; i++)
    {
        cin >> val[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> weight[i];
    }
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            dp[i][j] = -1;
        }
    }
    cout << unbounded_knapsack(n, s, val, weight);
    return 0;
}
