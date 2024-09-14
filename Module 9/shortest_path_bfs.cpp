#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<int> adj[N];
bool visited[N];
int level[N];
int parent[N];

// here the time complexity of bfs is O(n+m)  - edge
void bfs(int s)
{
    queue<int> q;
    q.push(s);
    visited[s] = true;
    level[s] = 0;
    parent[s] = -1; // 1

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
                parent[v] = u; // 1
            }
        }
    }
}

int main()
{
    int m, n, s, d;
    cin >> m >> n;
    for (int i = 0; i < n; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    cin >> s >> d;
    bfs(s);
    cout << "Distance: " << level[d] << endl;
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << "Parent of " << i << ": " << parent[i];
    //     cout << endl;
    // }

    //  worst case time complexity for finding path is O(n)
    vector<int> path;
    int current = d;
    while (current != -1)
    {
        path.push_back(current);
        current = parent[current];
    }
    reverse(path.begin(), path.end());
    cout << "Path : ";
    for (int node : path)
    {
        cout << node << " ";
    }

    return 0;
}