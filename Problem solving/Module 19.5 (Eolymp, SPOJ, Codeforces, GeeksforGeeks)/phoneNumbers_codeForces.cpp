#include <bits/stdc++.h>
using namespace std;
int main()
{
    int inp;
    string num, c = "";
    cin >> inp >> num;

    if (inp % 2 != 0)
    {
        for (int i = 0; i < inp - 1; i++)
        {
            if (i == 0)
            {
                c += num[i];
            }
            else if (i % 2 == 0)
            {
                c += "-";
                c += num[i];
            }
            else
            {
                c += num[i];
            }
        }
        c += num[inp - 1];
    }
    else
    {
        for (int i = 0; i < inp; i++)
        {
            if (i == 0)
            {
                c += num[i];
            }
            else if (i % 2 == 0)
            {
                c += "-";
                c += num[i];
            }
            else
            {
                c += num[i];
            }
        }
    }
    cout << c;
    return 0;
}