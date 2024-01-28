#include <bits/stdc++.h>
using namespace std;
#define pi pair<int, int>

const int N = 1e3 + 5;
bool vis[N][N];
char arr[N][N];
int mini = INT_MAX;
int n, m, c;

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
    c++;
    for (int i = 0; i < path.size(); i++)
    {
        pi p = path[i];
        int ci = p.first + si;
        int cj = p.second + sj;
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

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == '.' && !vis[i][j])
            {
                c = 0;
                dfs(i, j);
                // cout << c;
                if (c < mini)
                {
                    mini = c;
                }
            }
        }
    }
    if (mini == INT_MAX)
    {
        cout << "-1";
    }
    else
    {
        cout << mini;
    }
    return 0;
}