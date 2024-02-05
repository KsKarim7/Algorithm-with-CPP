#include <bits/stdc++.h>
using namespace std;
#define pr pair<int, int>

int t, n, m, ki, kj, qi, qj;

const int N = 1e2 + 5;
bool vis[N][N];
int dis[N][N];

vector<pr> path = {{1, -2}, {2, -1}, {2, 1}, {1, 2}, {-1, -2}, {-2, -1}, {-2, 1}, {-1, 2}};

bool isValid(int cI, int cJ)
{
    if (cI >= 0 && cI < n && cJ >= 0 && cJ < m)
        return true;
    else
        return false;
}

void bfs(int si, int sj)
{
    queue<pr> q;
    q.push({si, sj});
    dis[si][sj] = 0;
    vis[si][sj] = true;
    while (!q.empty())
    {
        pr parent = q.front();
        q.pop();
        int pI = parent.first;
        int pJ = parent.second;
        for (int i = 0; i < path.size(); i++)
        {
            pr p = path[i];
            int cI = pI + p.first;
            int cJ = pJ + p.second;
            if (isValid(cI, cJ) && !vis[cI][cJ])
            {
                vis[cI][cJ] = true;
                q.push({cI, cJ});
                dis[cI][cJ] = dis[pI][pJ] + 1;
            }
        }
    }
}

int main()
{
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> m;
        cin >> ki >> kj;
        cin >> qi >> qj;
        bfs(ki, kj);
        // if (i == 0)
        // {
        //     for (int i = 0; i < n; i++)
        //     {
        //         for (int j = 0; j < m; j++)
        //         {
        //             cout << dis[i][j] << " ";
        //         }
        //         cout << endl;
        //     }
        // }
        if (vis[qi][qj])
        {
            cout << dis[qi][qj] << endl;
        }
        else
        {
            cout << -1 << endl;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                dis[i][j] = 0;
                vis[i][j] = false;
            }
        }
    }
    return 0;
}