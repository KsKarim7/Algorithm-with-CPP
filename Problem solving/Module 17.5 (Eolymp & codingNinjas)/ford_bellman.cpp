#include <bits/stdc++.h>
using namespace std;
int const F = 1e5;

class Edge
{
public:
    int u, v, w;
    Edge(int u, int v, int w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

int main()
{
    int n, e;
    cin >> n >> e;
    vector<Edge> v;
    int dis[n + 1];
    dis[1] = 0;
    for (int i = 2; i <= n; i++)
    {
        dis[i] = F;
    }
    while (e--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        Edge ed(a, b, w);
        v.push_back(ed);
    }
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 0; j < v.size(); j++)
        {
            Edge ed = v[j];
            int a = ed.u;
            int b = ed.v;
            int w = ed.w;
            if (dis[a] + w < dis[b])
            {
                dis[b] = dis[a] + w;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (dis[i] == F)
        {
            cout << 30000 << " ";
            continue;
        }

        cout << i << ":  " << dis[i] << endl;
    }

    return 0;
}