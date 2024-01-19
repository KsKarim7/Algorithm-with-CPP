#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int dis[N];
int parent[N];
bool vis[N];
vector<int> v[N];

void bfs(int s)
{
    queue<int> q;
    q.push(s);
    dis[s] = 0;
    vis[s] = true;
    parent[s] = -1;
    while (!q.empty())
    {
        int p = q.front();
        q.pop();
        for (int child : v[p])
        {
            if (!vis[child])
            {
                q.push(child);
                parent[child] = p;
                dis[child] = dis[p] + 1;
                vis[child] = true;
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    bfs(1);
    for (int i = 1; i <= n; i++)
    {
        cout << "Node " << i << ": " << parent[i] << endl;
    }

    int d;
    cin >> d;

    if (vis[d])
    {
        vector<int> path;
        int x = d;
        while (x != -1)
        {
            // cout << x << endl;
            path.push_back(x);
            x = parent[x];
        }
        reverse(path.begin(), path.end());
        for (int val : path)
        {
            cout << val << " ";
        }
    }
    else
    {
        cout << "No way man" << endl;
    }
    return 0;
}