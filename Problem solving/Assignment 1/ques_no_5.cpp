#include <bits/stdc++.h>
using namespace std;

vector<int> v;

// void merge(l, r, mid){

// };

// void mergeSort(int l, int r)
// {
//     if (l == r)
//     {
//         return;
//     }
//     int mid = (l + r) / 2;
//     mergeSort(l, mid);
//     mergeSort(mid + 1, r);
//     merge(l, r, mid);
// }

int main()
{
    int n;
    cin >> n;
    int ar[n + 1];
    ar[n] = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ar[i] = x;
    }
    int m;
    cin >> m;
    int arr[m + 1];
    arr[m] = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr[i] = x;
    }
    if (n > m)
    {

        for (int i = 0; i < n; i++)
        {
            v.push_back(ar[i]);
            v.push_back(arr[i]);
        }
    }
    else
    {
        for (int i = 0; i < m; i++)
        {
            v.push_back(ar[i]);
            v.push_back(arr[i]);
        }
    }
    for (int i = 0; i < n + m; i++)
    {
        cout << v[i] << " ";
    }
    // int a = (sizeof(ar) / sizeof(int)) + 1;
    // int b = (sizeof(arr) / sizeof(int)) + 1;

    // ar[sizeof(ar) / sizeof(int)] = INT_MIN;
    // arr[sizeof(ar) / sizeof(int)] = INT_MIN;

    // int rarr[(sizeof(ar) / sizeof(int)) + (sizeof(arr) / sizeof(int))];

    // int lp = 0, rp = 0;

    // for (int i = 0; i <= a + b; i++)
    // {
    //     if (ar[lp] >= arr[rp])
    //     {
    //         rarr[i] = ar[lp];
    //         lp++;
    //     }
    //     else
    //     {
    //         rarr[i] = arr[lp];
    //         lp++;
    //     }
    // }
    // for (int i = 0; i < a + b; i++)
    // {
    //     cout << v[i] << " ";
    // }
    return 0;
}