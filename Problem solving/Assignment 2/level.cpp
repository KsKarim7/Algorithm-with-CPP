#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<int> adj[N];
bool visited[N];
int level[N];
vector<int> ans;

void bfs(int s, int c)
{
    queue<int> q;
    q.push(s);
    visited[s] = true;
    level[s] = 0;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        if (level[u] == c)
        {
            ans.push_back(u);
        }
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
    int m, n, c;
    cin >> m >> n;
    for (int i = 0; i < n; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    cin >> c;
    bfs(0, c);

    // cout << "Level of " << c << " : " << level[c];
    if (ans.size() == 0)
    {
        cout << -1 << endl;
    }
    else
    {
        sort(ans.begin(), ans.end());
        for (auto x : ans)
        {
            cout << x << " ";
        }
    }

    return 0;
}