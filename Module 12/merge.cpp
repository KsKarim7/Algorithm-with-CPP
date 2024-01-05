#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int s, int m, int e)
{
    int lSize = m - s + 1;
    int rSize = e - m;
    int L[lSize], R[rSize], x = 0;
    for (int i = s; i <= m; i++)
    {
        L[x] = arr[i];
        x++;
    }
    x = 0;
    for (int i = m + 1; i <= e; i++)
    {
        R[x] = arr[i];
        x++;
    }
    // for (int i = 0; i < rSize; i++)
    // {
    //     cout << R[i] << " ";
    // }
    int i = s, k = 0, j = 0;
    while (j < lSize && k < rSize)
    {
        if (L[j] <= R[k])
        {
            arr[i] = L[j];
            j++;
        }
        else
        {
            arr[i] = R[k];
            k++;
        }
        i++;
    }
    while (j < lSize)
    {
        arr[i] = arr[j];
        j++;
        i++;
    }
    while (k < rSize)
    {
        arr[i] = arr[k];
        k++;
        i++;
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    merge(arr, 0, 3, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}