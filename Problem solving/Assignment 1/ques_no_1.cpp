#include <bits/stdc++.h>
using namespace std;
vector<int> v;

void merge(int mid, int l, int r)
{
    int l_size = mid - l + 1;
    int L[l_size];

    int r_size = r - mid;
    int R[r_size];

    for (int i = l, j = 0; i <= mid; j++, i++)
    {
        L[j] = v[i];
    }
    for (int i = mid + 1, j = 0; i <= r; j++, i++)
    {
        R[j] = v[i];
    }

    L[l_size] = INT_MIN;
    R[r_size] = INT_MIN;

    int lp = 0;
    int rp = 0;

    for (int i = l; i <= r; i++)
    {
        if (L[lp] >= R[rp])
        {
            v[i] = L[lp];
            lp++;
        }
        else
        {
            v[i] = R[rp];
            rp++;
        }
    }
    // for (int i = 0; i < sizeof(L) / sizeof(L[0]); i++)
    // {
    //     cout << L[i] << " ";
    // }
    // cout << endl;
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
    merge(mid, l, r);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    mergeSort(0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}