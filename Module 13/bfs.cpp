#include <bits/stdc++.h>
using namespace std;

int const N = 1e5 + 5;
vector<int> v[N];
int dis[N];
bool visited[N];

void bfs(int source)
{
    queue<int> q;
    q.push(source);
    visited[source] = true;
    dis[source] = 0;
    while (!q.empty())
    {
        int parent = q.front();
        q.pop();
        for (int i = 0; i < v[parent].size(); i++)
        {
            int child = v[parent][i];
            if (visited[child] == false)
            {
                q.push(child);
                dis[child] = dis[parent] + 1;
                visited[child] = true;
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
        int n, m;
        v[n].push_back(m);
        v[m].push_back(n);
    }
    bfs(1);
    for (int i = 1; i <= n; i++)
    {
        cout << "Node " << i << ": " << dis[i] << endl;
    }
    return 0;
}