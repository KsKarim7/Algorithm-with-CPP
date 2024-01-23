#include <bits/stdc++.h>
#define pi pair<int, int>

using namespace std;

int main()
{
    priority_queue<pi, vector<pi>, greater<pi>> pq;
    int x;
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        int n, m;
        cin >> n >> m;
        pq.push({n, m});
    }
    while (!pq.empty())
    {
        cout << pq.top().first << " " << pq.top().second << endl;
        pq.pop();
    }

    return 0;
}