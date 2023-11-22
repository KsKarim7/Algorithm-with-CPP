#include <bits/stdc++.h>
using namespace std;

int BSearch(int arr[], int n, int m)
{
    int l = 0, r = n;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] == m)
        {
            return mid;
        }
        else if (arr[mid] > m)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return -1;
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
        arr[i] = x;
    }
    int m;
    cin >> m;
    int res = BSearch(arr, n, m);
    if (res == -1)
    {
        cout << "Not Found";
    }
    else
    {
        cout << res;
    }
    return 0;
}