#include <bits/stdc++.h>
using namespace std;
int dp[1005][1005];

int subset_sum(int n, int arr[], int s)
{
    if (n == 0)
    {
        if (s == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    if (dp[n][s] != -1)
    {
        return dp[n][s];
    }
    if (arr[n - 1] <= s)
    {
        int option1 = subset_sum(n - 1, arr, s - arr[n - 1]);
        int option2 = subset_sum(n - 1, arr, s);
        return dp[n][s] = option1 + option2;
    }
    else
    {
        return dp[n][s] = subset_sum(n - 1, arr, s);
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    int diff;
    cin >> diff;
    int s = diff + sum / 2;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            dp[i][j] = -1;
        }
    }
    cout << subset_sum(n, arr, s);
    return 0;
}