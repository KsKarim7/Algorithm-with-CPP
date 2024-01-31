#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 5;
vector<pair<int, int>> v[N];
int dis[N];

void dijkstra(int x)
{
    queue<int> q;
    dis[x] = 0;
    q.push(x);
    while (!q.empty())
    {
        int p = q.front();
        q.pop();
        for (int i = 0; i < v[p].size(); i++)
        {
            pair<int, int> child = v[p][i];
            int childNode = child.first;
            int childCost = child.second;
            if (dis[p] + childCost < dis[childNode])
            {
                dis[childNode] = dis[p] + childCost;
                q.push(childNode);
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
        int a, b, w;
        cin >> a >> b >> w;
        v[a].push_back({b, w});
    }
    for (int i = 1; i <= n; i++)
    {
        dis[i] = INT_MAX;
    }
    int s, t, d, c;
    cin >> s;
    cin >> t;
    dijkstra(s);
    while (t--)
    {
        cin >> d >> c;
        if (dis[d] <= c)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
        cout << endl;
    }
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << "Node " << i << ": " << dis[i] << endl;
    // }
    return 0;
}