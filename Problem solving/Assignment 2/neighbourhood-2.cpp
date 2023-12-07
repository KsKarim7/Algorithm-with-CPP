#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 5;
vector<int> adj[N];
bool visited[N];

// void dfs(int u, int k, int &count)
// {

//     visited[u] = true;
//     // cout << "Visiting node: " << u << endl;
//     for (int v : adj[u])
//     {
//         if (v == k)
//         {
//             for (int w : adj[k])
//             {
//                 if (w == u)
//                 {
//                     count++;
//                 }
//             }
//             count++;
//         }
//         if (visited[v] == true)
//         {
//             continue;
//         }
//         dfs(v, k, count);
//     }
// }

void bfs(int s, int &count)
{
    queue<int> q;
    q.push(s);
    visited[s] = true;
    // level[s] = 0;

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
                // level[v] = level[u] + 1;
                count++;
            }
        }
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
        // adj[v].push_back(u);
    }
    int k, count = 0;
    cin >> k;
    // dfs(k, k, count);
    bfs(k, count);
    cout << count;
    return 0;
}
