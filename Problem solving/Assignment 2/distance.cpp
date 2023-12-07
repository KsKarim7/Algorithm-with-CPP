#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 5;
vector<int> adj[N];
bool visited[N];
int level[N];

void bfs(int s)
{
    queue<int> q;
    q.push(s);
    visited[s] = true;
    level[s] = 0;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int v : adj[u])
        {
            if (visited[v] == false)
            {
                q.push(v);
                visited[v] = true;
                level[v] = level[u] + 1;
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
        adj[v].push_back(u);
    }
    int o;
    cin >> o;
    for (int i = 0; i < o; i++)
    {
        int x, y;
        cin >> x >> y;
        for (int i = 0; i < N; i++)
        {
            visited[i] = false;
            level[i] = -1;
        }
        bfs(x);

        cout << level[y] << endl;
    }
    return 0;
}