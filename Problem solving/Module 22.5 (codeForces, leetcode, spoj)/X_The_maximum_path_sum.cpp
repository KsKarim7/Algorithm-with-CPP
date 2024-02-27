#include <bits/stdc++.h>
using namespace std;

long long arr[11][11];

long long pathSum(int i, int j, int n, int m)
{
    if (i >= n || j >= m)
    {
        return 0;
    }
    if (i < n && j < m)
    {
        int k = arr[i][j] + pathSum(i + 1, j, n, m);
        int l = arr[i][j] + pathSum(i, j + 1, n, m);
        // cout << max(k, l) << endl;
        return max(k, l);
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= m; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    cout << pathSum(0, 0, n, m);
    return 0;
}