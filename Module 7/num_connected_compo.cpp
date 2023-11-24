#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 5;
vector<int> adj[N];
bool visited[N];

void dfs(int u)
{
    visited[u] = true;
    for (int v : adj[u])
    {
        if (visited[v])
        {
            continue;
        }
        dfs(v);
    }
}

void bfs(int s)
{
    queue<int> q;
    q.push(s);
    visited[s] = true;

    while (!q.empty())
    {
        // pop a node from the queue and insert unvisited neighbour of that node
        int u = q.front();
        q.pop();
        for (int v : adj[u])
        {

            if (visited[v] == false)
            {
                q.push(v);
                visited[v] = true;
            }
        }
    }
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
    int connecCompo = 0;
    for (int i = 1; i <= n; i++)
    {
        if (visited[i])
        {
            continue;
        }
        // dfs(i);
        bfs(i);
        connecCompo++;
    }
    cout << "Number of connected components: " << connecCompo << endl;
    return 0;
}