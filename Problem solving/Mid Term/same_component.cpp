#include <bits/stdc++.h>
using namespace std;
#define pi pair<int, int>

const int N = 1e3 + 5;
bool vis[N][N];
char arr[N][N];
int n, m;
int a, b, c, d;

vector<pi> path = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
bool isValid(int cI, int cJ)
{
    if (cI >= 0 && cI < n && cJ >= 0 && cJ < m && arr[cI][cJ] == '.')
        return true;
    else
        return false;
}

void dfs(int si, int sj)
{
    vis[si][sj] = true;
    for (int i = 0; i < path.size(); i++)
    {
        pi p = path[i];
        int ci = si + p.first;
        int cj = sj + p.second;
        if (isValid(ci, cj) && !vis[ci][cj])
        {
            dfs(ci, cj);
        }
    }
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    cin >> a >> b;
    cin >> c >> d;

    dfs(a, b);
    if (vis[c][d] == true)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}