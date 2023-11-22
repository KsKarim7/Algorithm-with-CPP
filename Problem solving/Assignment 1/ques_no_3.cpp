#include <bits/stdc++.h>
using namespace std;

int BSearch(int arr[], int n, int m)
{
    int l = 0, r = n, count = 0;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] == m)
        {
            count++;
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
    // if (count != 0)
    //     return count;
    return count;
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
    if (res > 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}