#include <bits/stdc++.h>
using namespace std;
#define pi pair<int, int>

const int N = 1e5 + 5;
vector<pi> v[N];
// bool vis[N];

class Edge
{
public:
    int a, b, w;
    Edge(int a, int b, int w)
    {
        this->a = a;
        this->b = b;
        this->w = w;
    }
};

class compare
{
public:
    bool operator()(Edge a, Edge b)
    {
        return a.w > b.w;
    }
};

void prims(int s, int d, bool vis[])
{
    priority_queue<Edge, vector<Edge>, compare> pq;
    vector<Edge> EdgeLst;
    pq.push(Edge(s, s, 0));
    int cost = 0;
    while (!pq.empty())
    {
        Edge parent = pq.top();
        pq.pop();
        int a = parent.a;
        int b = parent.b;
        int w = parent.w;
        cost += w;
        if (b == d)
        {
            cout << cost << endl;
            break;
        }
        if (vis[b])
        {
            continue;
        }
        vis[b] = true;
        EdgeLst.push_back(parent);
        for (int i = 0; i < v[b].size(); i++)
        {
            pi child = v[b][i];
            if (!vis[child.first])
            {
                pq.push(Edge(b, child.first, child.second));
            }
        }
    }
}

int main()
{
    bool vis[N];
    int n, m, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        v[a].push_back({b, w});
        // v[b].push_back({a, w});
    }
    // prims(4, 2);
    cin >> m;
    // cout << m;
    // while (m--)
    // {
    //     int s, d;
    //     cin >> s >> d;
    //     prims(s, d);
    // }
    prims(1, 2, vis);
    prims(4, 2, vis);
    return 0;
}