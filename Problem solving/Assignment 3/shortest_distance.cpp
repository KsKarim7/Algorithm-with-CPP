#include <bits/stdc++.h>
using namespace std;
const long long INF = 1e18;

int main()
{
    // your code goes here
    int n, e;
    cin >> n >> e;
    long long dis[n + 1][n + 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j)
            {
                dis[i][j] = 0;
                continue;
            }
            dis[i][j] = INF;
        }
    }
    while (e--)
    {
        int a, b;
        long long w;
        cin >> a >> b >> w;
        dis[a][b] = w;
    }

    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (dis[i][k] + dis[k][j] < dis[i][j])
                {
                    dis[i][j] = dis[i][k] + dis[k][j];
                }
            }
        }
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int x, y;
        cin >> x >> y;
        if (dis[x][y] == INF)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << dis[x][y] << endl;
        }
    }

    return 0;
}