#include <bits/stdc++.h>
using namespace std;

bool ifReach(long long int val, long long int n)
{
    if (val == n)
    {
        return true;
    }
    if (val > n)
    {
        return false;
    }
    return ifReach(val * 10, n) || ifReach(val * 20, n);
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        long long int n;
        cin >> n;
        if (ifReach(1, n))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    // cout << 10 / 10;
    return 0;
}