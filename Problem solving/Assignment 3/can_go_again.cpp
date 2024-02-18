#include <bits/stdc++.h>
using namespace std;
const long long mx = 1e18;

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
    long long dis[n + 1];
    for (int i = 1; i <= n; i++)
    {
        dis[i] = mx;
    }
    vector<Edge> v;
    while (e--)
    {
        long long a, b, w;
        cin >> a >> b >> w;
        Edge ed(a, b, w);
        v.push_back(ed);
    }
    int s, q;
    bool cycle = false;
    cin >> s;
    dis[s] = 0;
    for (int i = 1; i <= n - 1; i++)
    {
        for (Edge ed : v)
        {
            if ((dis[ed.u] != mx) && (dis[ed.u] + ed.w < dis[ed.v]))
            {
                dis[ed.v] = dis[ed.u] + ed.w;
            }
        }
    }
    for (Edge ed : v)
    {
        if ((dis[ed.u] != mx) && (dis[ed.u] + ed.w < dis[ed.v]))
        {
            cycle = true;
            break;
        }
    }

    cin >> q;
    for (int i = 1; i <= q; i++)
    {
        int d;
        cin >> d;
        if (cycle != true)
        {

            if (dis[d] == mx)
            {
                cout << "Not Possible" << endl;
            }
            else
            {
                cout << dis[d] << endl;
            }
        }
    }
    if (cycle)
    {
        cout << "Negative Cycle Detected";
    }

    return 0;
}