#include <bits/stdc++.h>
using namespace std;

int sum = 0;
int n, m;

int pathSum(int arr[11][11], int i, int j, int n, int m)
{
    if (i == n || j == m)
    {
        return 0;
    }
    int k = arr[i][j] + pathSum(arr, i + 1, j, n, m);
    int l = arr[i][j] + pathSum(arr, i, j + 1, n, m);
    return max(k, l);
}

int main()
{
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
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
    cout << pathSum(arr, 0, 0, n, m);
    return 0;
}