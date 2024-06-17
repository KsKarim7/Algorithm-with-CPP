#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j;
    cin >> i;
    int arr1[i];
    for (int m = 0; m < i; m++)
    {
        // cin >> arr1[m];
        scanf("%d", &arr1[m]);
    }
    arr1[i] = INT_MAX;
    cin >> j;
    int arr2[j];
    for (int m = 0; m < j; m++)
    {
        // cin >> arr2[m];
        scanf("%d", &arr2[m]);
    }
    arr2[j] = INT_MAX;
    int res[i + j];
    int pointer1 = 0, pointer2 = 0;
    while (pointer1 != i || pointer2 != j)
    {
        if (arr1[pointer1] < arr2[pointer2])
        {
            res[pointer1 + pointer2] = arr1[pointer1];
            pointer1++;
        }
        else
        {
            res[pointer1 + pointer2] = arr2[pointer2];
            pointer2++;
        }
    }
    for (int k = 0; k < i + j; k++)
    {
        printf("%d ", res[k]);
    }
    return 0;
}