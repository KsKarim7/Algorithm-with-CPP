#include <bits/stdc++.h>
using namespace std;

int myfunc(int &sum)
{
    sum += 10;
    return sum;
}

int main()
{
    int sum = 0;
    cout << myfunc(sum) << endl;
    return 0;
}