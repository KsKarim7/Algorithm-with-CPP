#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 5;
vector<int> adj[N];
bool visited[N];

bool dfs(int u, int p)
{
    bool cycleExist = false;
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
        cycleExist = cycleExist | dfs(v, u);
    }
    return cycleExist;
}

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(v);
    }

    bool isCycle = false;
    for (int i = 1; i <= 1; i++)
    {
        if (visited[i])
        {
            continue;
        }
        isCycle |= dfs(i, -1);
    }

    if (isCycle)
    {
        cout << "Cycle Detected!\n";
    }
    else
    {
        cout << "No Cycle Detected!\n";
    }
    return 0;
}