#include <bits/stdc++.h>
using namespace std;

int createExp(int arr[], int n, int x, const int &sum)
{
    if (n == 0 || sum == x)
    {
        // cout << sum << endl;
        return 0;
    }
    if (arr[n - 1] <= x && arr[n - 1] >= 0)
    {
        return createExp(arr, n - 1, x, sum + arr[n - 1]);
        return createExp(arr, n - 1, x, sum - arr[n - 1]);
    }
    else
    {
        return createExp(arr, n - 1, x, sum);
    }
}

int main()
{
    int n, x, sum = 0;
    cin >> n >> x;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (createExp(arr, n, x, sum) == x)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << sum;
        cout << "NO" << endl;
    }
    return 0;
}