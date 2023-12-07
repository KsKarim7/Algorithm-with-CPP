#include <bits/stdc++.h>
using namespace std;

int const N = 1e3 + 5;
vector<int> adj[N];
bool visited[N];

vector<int> vc;
void dfs(int u, int &num)
{
    vc.push_back(u);
    num++;
    for (int v : adj[u])
    {
        visited[u] = true;

        if (visited[v])
        {
            vc.pop_back();
            num--;
            continue;
        }
        vc.push_back(v);
        num++;
        dfs(v, num);
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
    int conComp = 0;
    vector<int> vec;
    for (int i = 1; i <= n; i++)
    {
        int num = 0;
        if (visited[arr[i]])
        {
            // num++;
            continue;
        }
        dfs(arr[i], num);
        cout << num << endl;
        // vec.push_back(num);
        conComp++;
        // v.push_back(num);
        // num = 0;
        // for (int j = 0; j < vc.size(); j++)
        // {
        //     cout << arr[i] << ": " << vc[j] << endl;
        // }
        vc.clear();
        cout << endl;
    }
    // cout << conComp << endl;
    // cout << v[0] << endl;
    // for (int i = 0; i < 2; i++)
    // {
    //     cout << vec[i] << endl;
    // }
    // cout << vec[0] << endl;
    return 0;
}