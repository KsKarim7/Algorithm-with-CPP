#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 5;
vector<int> adj[N];
bool visited[N];

void dfs(int u, int r, int &count)
{

    visited[u] = true;
    // cout << "Visiting node: " << u << endl;
    for (int v : adj[u])
    {
        if (r == v)
        {
            count++;
        }
        if (visited[v] == true)
        {
            continue;
        }
        dfs(v, r, count);
    }
}

int main()
{
    int m, n;
    cin >> m >> n;
    for (int i = 0; i < n; i++)
    {

        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int k;
    cin >> k;
    int count = 0;
    dfs(k, k, count);
    cout << count;
    return 0;
}