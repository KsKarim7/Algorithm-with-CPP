#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // vector<int> nums(n);
    int nums[n];
    for (auto &num : nums)
    {
        cin >> num;
    }
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}