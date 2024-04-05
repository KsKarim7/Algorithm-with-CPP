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
        // pop a node from the queue and insert unvisited neighbour of that node
        int u = q.front();
        q.pop();
        cout << "visiting node: " << u << endl;

        // section 1: A node is being processed;
        for (int v : adj[u])
        {
            // section 2: before pushing the childs of the node
            if (visited[v] == false)
            {
                q.push(v);
                visited[v] = true;
                level[v] = level[u] + 1;

                // section 3: after pushing the childs of the node
            }
            // section 4: similar to section 1
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
    bfs(0);
    for (int i = 1; i <= n; i++)
    {
        cout << "Level of " << i << ": " << level[i] << endl;
    }
    return 0;
}