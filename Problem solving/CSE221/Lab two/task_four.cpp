#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> vec;

void merge(int l, int r, int mid)
{
    int left_size = mid - l + 1;
    int right_size = r - mid + 1;

    vector<pair<int, int>> L;
    vector<pair<int, int>> R;

    for (int i = l; i <= mid; i++)
    {
        L.push_back(vec[i]);
    }
    for (int i = mid + 1; i <= r; i++)
    {
        R.push_back(vec[i]);
    }
    L.push_back({INT_MAX, 0});
    R.push_back({INT_MAX, 0});

    int lp = 0, rp = 0;
    for (int i = l; i <= r; i++)
    {
        if (L[lp].first <= R[rp].first)
        {
            vec[i] = L[lp];
            lp++;
        }
        else
        {
            vec[i] = R[rp];
            rp++;
        }
    }
}

void mergeSort(int l, int r)
{
    if (l == r)
    {
        return;
    }
    int mid = (l + r) / 2;
    mergeSort(l, mid);
    mergeSort(mid + 1, r);
    merge(l, r, mid);
}

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        vec.push_back({a, b});
    }
    mergeSort(0, n - 1);
    for (auto pair : vec)
    {
        printf("%d %d\n", pair.first, pair.second);
    }
    int count = 0;
    if (vec.size() > m)
    {
        count += m;
    }
    return 0;
}