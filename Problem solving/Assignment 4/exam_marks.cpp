#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, m;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        bool flag = false;
        cin >> n >> m;
        int arr[n];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        if (m == 1000)
        {
            cout << "YES" << endl;
            flag = true;
        }
        else
        {
            for (int j = 0; j < n; j++)
            {
                m += arr[j];
                if (m == 1000)
                {
                    cout << "YES" << endl;
                    flag = true;
                }
            }
        }
        if (flag == false)
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}