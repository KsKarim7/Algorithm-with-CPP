#include <bits/stdc++.h>
using namespace std;

int const N = 1e3 + 5;
vector<int> adj[N];
bool visited[N];
vector<int> v;

void dfs(int u)
{
    for (int v : adj[u])
    {
        visited[u] = true;
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
        int u = q.front();
        q.pop();
        for (int v : adj[u])
        {
            if (visited[v])
                continue;
            q.push(v);
            visited[v] = true;
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n + 1];
    bool visit[N];
    int j = 1;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        if (!visit[u])
        {
            visit[u] = true;
            arr[j] = u;
            j++;
        }
        if (!visit[v])
        {
            visit[v] = true;
            arr[j] = v;
            j++;
        }
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    // int conComp = 0;
    // // int num = 0;
    // for (int i = 1; i <= n; i++)
    // {

    //     if (visited[i])
    //     {
    //         // num++;
    //         continue;
    //     }
    //     dfs(arr[i]);
    //     conComp++;
    //     // v.push_back(num);
    //     // num = 0;
    // }
    // cout << conComp << endl;
    // // cout << v[0] << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}