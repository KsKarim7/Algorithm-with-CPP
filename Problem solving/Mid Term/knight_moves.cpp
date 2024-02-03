#include <bits/stdc++.h>
using namespace std;
#define pi pair<int, int>

int t, n, m, k, l, u, r, step;

const int N = 1e2 + 5;
bool vis[N][N];
int dis[N][N];
// vector<pi> path = {{2, 1}, {1, 2}, {-1, 2}, {-1, 2}, {1, -2}, {2, -1}, {-2, -1}};
vector<pi> path = {{1, -2}, {2, -1}, {2, 1}, {1, 2}, {-1, -2}, {-2, -1}, {-2, 1}, {-1, 2}};

bool isValid(int cI, int cJ)
{
    if (cI >= 0 && cI < n && cJ >= 0 && cJ < m)
        return true;
    else
        return false;
}

void dfs(int si, int sj)
{
    queue<pi> q;
    q.push({si, sj});
    dis[si][sj] = 0;
    vis[si][sj] = true;
    while (!q.empty())
    {
        pi parent = q.front();
        int pI = parent.first;
        int pJ = parent.second;
        q.pop();
        for (int i = 0; i < path.size(); i++)
        {
            pi p = path[i];
            int cI = pI + p.first;
            int cJ = pJ + p.second;
            if (isValid(cI, cJ) && !vis[cI][cJ])
            {
                step++;
                if (cI == u && cJ == r)
                {
                    break;
                }
                vis[cI][cJ] = true;
                q.push({cI, cJ});
                dis[cI][cJ] = dis[pI][pJ] + 1;
                // cout << "step" << endl;
            }
        }
    }
}

int main()
{
    cin >> t;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < t; i++)
    {
        step = 0;
        cin >> k >> l;
        cin >> u >> r;
        dfs(k, l);
        cout << step << endl;
        // cout << dis[k][l] << endl;
    }

    return 0;
}