#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int parent[N];
int parentSize[N];

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
    int n, e, cycleN = 0;
    pair<int, int> cycle;
    pair<int, int> connect;
    cin >> n;
    e = n - 1;
    DSU_set(n);
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        int leaderA = DSU_find(a);
        int leaderB = DSU_find(b);
        if (leaderA == leaderB)
        {
            cycleN++;
            cycle.first = a;
            cycle.second = b;
        }
        else
        {
            DSU_union(a, b);
        }
    }
    int l = DSU_find(1);
    for (int i = 2; i <= n; i++)
    {
        int leaderB = DSU_find(i);
        if (l != leaderB)
        {
            connect.first = l;
            connect.second = leaderB;
        }
    }
    if (cycleN == 0)
    {
        cout << cycleN;
    }
    else
    {

        cout << cycleN << endl
             << cycle.first << " " << cycle.second << " " << connect.first << " " << connect.second;
    }
    return 0;
}