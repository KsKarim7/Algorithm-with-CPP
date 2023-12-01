#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 5;
vector<int> adj[N];
int visited[N];

bool dfs(int u, int p)
{
    bool cyclic = false;
    visited[u] = true;
    for (int v : adj[u])
    {
        if (v == p)
        {
            continue;
        }
        if (visited[v])
        {
            return true;
        }
        cyclic |= dfs(v, u);
    }
    return cyclic;
}
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i += 1)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bool cycle = false;
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            cycle |= dfs(i, -1);
        }
    }
    if (cycle)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}