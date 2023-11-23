#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
// vector<int> adj[N];

// for weighted list
vector<pair<int, int>> adj[N];

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        // int u, v;
        // cin >> u >> v;
        // adj[u].push_back(v); // this line only for directed
        // // adj[v].push_back(u);

        // for weighted list
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w}); // this line only for directed
        // adj[v].push_back(u);
    }

    // for (int i = 1; i <= n; i++)
    // {
    //     cout << "List " << i << ": ";
    //     for (int j : adj[i])
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    for (int i = 1; i <= n; i++)
    {
        cout << "List " << i << ": ";
        for (auto j : adj[i])
        {
            cout << "( " << j.first;
            cout << ", " << j.second << "), ";
        }
        cout << endl;
    }
    return 0;
}