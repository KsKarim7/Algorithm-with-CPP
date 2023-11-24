#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 7;
int nums[N], ar[N], arr[N];

// vector<int> v;
// vector<int> vv;

void merge(int l, int r, int mid)
{
    int left_size = mid - l + 1;
    int L[left_size];

    int right_size = r - (mid + 1) + 1;
    int R[right_size];

    for (int i = l, j = 0; i <= mid; i++, j++)
    {
        L[j] = nums[i];
    }
    for (int i = mid + 1, j = 0; i <= r; i++, j++)
    {
        R[j] = nums[i];
    }

    L[left_size] = INT_MAX;
    R[left_size] = INT_MAX;

    int lp = 0, rp = 0;
    for (int i = l; i <= r; i++)
    {
        if (L[lp] <= R[rp])
        {
            nums[i] = L[lp];
            lp++;
        }
        else
        {
            nums[i] = R[rp];
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
    cin >> n;
    // int ar[n + 1];
    // ar[n] = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    cin >> m;
    // int arr[m + 1];
    // arr[m] = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    mergeSort(0, (n + m) - 1);
    return 0;
}