#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int parent[N];
bool vis[N];
int parentSize[N];

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

bool compare(Edge a, Edge b)
{
    return a.w < b.w;
}

void DSU_set(int n)
{
    for (int i = 1; i <= n; i++)
    {
        parent[i] = -1;
        parentSize[i] = 1;
    }
}

int DSU_find(int node)
{
    while (parent[node] != -1)
    {
        node = parent[node];
    }
    return node;
}

void DSU_union(int a, int b)
{
    int leaderA = DSU_find(a);
    int leaderB = DSU_find(b);
    if (leaderA != leaderB)
    {
        if (parentSize[leaderA] > parentSize[leaderB])
        {
            // A becomes the leader
            parent[leaderB] = leaderA;
            parentSize[leaderA] += parentSize[leaderB];
        }
        else
        {
            parent[leaderA] = leaderB;
            parentSize[leaderB] += parentSize[leaderA];
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    vector<Edge> v;
    DSU_set(n);
    while (e--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        v.push_back(Edge(a, b, w));
    }
    sort(v.begin(), v.end(), compare);
    int cost = 0;
    for (Edge val : v)
    {
        int a = val.a;
        int b = val.b;
        int w = val.w;
        vis[a] = true;
        vis[b] = true;
        int leaderA = DSU_find(a);
        int leaderB = DSU_find(b);
        if (leaderA == leaderB)
        {
            continue;
        }
        cost += val.w;
        DSU_union(a, b);
    }
    bool flag = true;
    for (int i = 1; i <= n; i++)
    {
        if (vis[i] == false)
        {
            flag = false;
        }
    }
    if (flag == true)
    {
        cout << cost;
    }
    else
    {
        cout << -1;
    }
    return 0;
}