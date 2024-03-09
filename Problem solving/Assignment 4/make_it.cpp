#include <bits/stdc++.h>
using namespace std;

// bool make_it(int n, int i)
// {
//     if (n == i)
//     {
//         return true;
//     }
//     if (i > n)
//     {
//         return false;
//     }
//     bool option1 = make_it(n, i + 3);
//     bool option2 = make_it(n, i * 2);
//     return (option1 || option2);
// }

// int main()
// {
//     int t, n;
//     cin >> t;
//     for (int i = 0; i < t; i++)
//     {
//         cin >> n;
//         if (make_it(n, 1))
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
//     }
//     return 0;
// }

vector<bool> dp(1003, false);
bool make_it(int n, int i)
{
    if (dp[n])
    {
        return dp[i];
    }
    if (n == 1)
    {
        dp[i] = true;
        return true;
    }

    if (i < n)
    {
        bool option1 = make_it(n, i + 3);
        bool option2 = make_it(n, i * 2);
        return dp[n] = option1 || option2;
    }
}

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        dp.assign(1003, false);
        if (make_it(n, 1))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
