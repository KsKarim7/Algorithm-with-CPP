#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ar[i] = x;
    }
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr[i] = x;
    }
    int a = sizeof(ar) / sizeof(int);
    int b = sizeof(arr) / sizeof(int);
    ar[sizeof(ar) / sizeof(int)] = INT_MIN;
    arr[sizeof(ar) / sizeof(int)] = INT_MIN;
    int rarr[(sizeof(ar) / sizeof(int)) + (sizeof(arr) / sizeof(int))];
    int lp = 0, rp = 0;
    for (int i = 0; i <= a + b; i++)
    {
        if (ar[lp] >= arr[rp])
        {
            rarr[i] = ar[lp];
            lp++;
        }
        else
        {
            rarr[i] = arr[lp];
            lp++;
        }
    }
    for (int i = 0; i < a + b; i++)
    {
        cout << rarr[i] << " ";
    }
    return 0;
}