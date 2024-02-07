#include <bits/stdc++.h>
using namespace std;
int const F = 1e7;

int main()
{
    int n, mx = 0;
    cin >> n;
    int dis[n + 1][n + 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            int x;
            cin >> x;
            if (x == -1)
            {
                dis[i][j] = F;
                continue;
            }
            dis[i][j] = x;
        }
    }
    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (dis[i][k] + dis[k][j] < dis[i][j])
                {
                    if (mx < dis[i][k] + dis[k][j])
                    {
                        mx = dis[i][k] + dis[k][j];
                    }
                    dis[i][j] = dis[i][k] + dis[k][j];
                }
            }
        }
    }

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << dis[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    cout << mx;

    return 0;
}