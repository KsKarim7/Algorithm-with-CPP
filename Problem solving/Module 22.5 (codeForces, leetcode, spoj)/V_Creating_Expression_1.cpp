#include <bits/stdc++.h>
using namespace std;

int createExp(int arr[], int n, int x, int *sum)
{
    if (n == 0 || *sum == x)
    {
        // cout << *sum << endl;
        return *sum;
    }
    // if (arr[n - 1] >= 0)
    // {
    return createExp(arr, n - 1, x, sum + arr[n - 1]);
    return createExp(arr, n - 1, x, sum - arr[n - 1]);
    // }
    // else
    // {
    //     return createExp(arr, n - 1, x, sum);
    // }
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
    // cout << createExp(arr, n, x, &sum);
    // cout << s;
    // cout << createExp(arr, n, x, &sum);
    if (createExp(arr, n, x, &sum) == x)
    {
        // cout << sum;
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}