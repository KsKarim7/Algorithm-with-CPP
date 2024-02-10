#include <bits/stdc++.h>
using namespace std;
int parent[1000];
int parentLvl[1000];

void DSU_set(int n)
{
    for (int i = 1; i <= n; i++)
    {
        parent[i] = -1;
        parentLvl[i] = 1;
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
        if (parentLvl[leaderA] > parentLvl[leaderB])
        {
            parent[leaderB] = leaderA;
        }
        else if (parentLvl[leaderB] > parentLvl[leaderA])
        {
            parent[leaderA] = leaderB;
        }
        else
        {
            parent[leaderB] = leaderA;
            parentLvl[leaderA]++;
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    DSU_set(n);
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        int leaderA = DSU_find(a);
        int leaderB = DSU_find(b);
        if (leaderA == leaderB)
        {
            cout << "Cycle Detected in between: " << a << " " << b << endl;
        }
        else
        {
            DSU_union(a, b);
        }
    }

    return 0;
}