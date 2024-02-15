#include <bits/stdc++.h>
using namespace std;
#define pi pair<int, int>

const int N = 1e5 + 5;
vector<pi> v[N];
bool vis[N];

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

void prims(int s, int n)
{
    priority_queue<Edge, vector<Edge>, compare> pq;
    vector<Edge> edgeList;
    pq.push(Edge(s, s, 0));
    int count = 0;
    while (!pq.empty())
    {
        Edge parent = pq.top();
        pq.pop();
        int a = parent.a;
        int b = parent.b;
        int w = parent.w;
        if (vis[b])
            continue;
        vis[b] = true;
        count++;
        edgeList.push_back(parent);
        for (int i = 0; i < v[b].size(); i++)
        {
            pi child = v[b][i];
            if (!vis[child.first])
            {
                pq.push(Edge(b, child.first, child.second));
            }
        }
    }
    long long sum = 0;
    edgeList.erase(edgeList.begin());
    for (Edge val : edgeList)
    {
        sum += (long long)(val.w);
    }
    if (count == n)
    {
        cout << sum << endl;
    }
    else
    {
        cout << "IMPOSSIBLE" << endl;
    }
};

main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        v[a].push_back({b, w});
        v[b].push_back({a, w});
    }
    prims(1, n);
    return 0;
}