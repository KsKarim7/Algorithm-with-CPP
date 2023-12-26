#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pr;

const int N = 1e3 + 10;
vector<string> g;
bool visited[N][N];
bool level[N][N];
pr parent[N][N];
vector<pr> direc = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};
int n, m;

bool isValid(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < m);
}