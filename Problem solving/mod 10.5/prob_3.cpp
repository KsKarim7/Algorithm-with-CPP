#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 10;
vector<string> g;
bool visited[N][N];
bool f = false;
int n, m;

bool isValid(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < m);
}

void dfs(int i, int j)
{
    if (!isValid(i, j))
    {
        return;
    }
    if (visited[i][j])
    {
        return;
    }
    if (g[i][j] == 'x')
    {
        return;
    }
    if (g[i][j] == 'e')
    {
        f = true;
        return;
    }
    visited[i][j] = true;

    dfs(i, j - 1);
    dfs(i, j + 1);
    dfs(i - 1, j);
    dfs(i + 1, j);
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        g.push_back(x);
    }
    bool flag = false;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (g[i][j] == 'x')
            {
                continue;
            }
            if (visited[i][j])
            {
                continue;
            }
            if (g[i][j] == 's')
            {
                dfs(i, j);
                break;
            }
        }
        if (f == true)
        {
            break;
        }
    }
    if (f == true)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}