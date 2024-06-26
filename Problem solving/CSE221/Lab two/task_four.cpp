// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// struct Task
// {
//     int start, end;
// };

// bool compareTasks(Task a, Task b)
// {
//     return a.end < b.end;
// }

// int maxTasks(vector<Task> &tasks, int M)
// {
//     sort(tasks.begin(), tasks.end(), compareTasks);

//     int result = 0;
//     int endTime = 0;

//     for (int i = 0; i < tasks.size(); i++)
//     {
//         if (tasks[i].start >= endTime)
//         {
//             result++;
//             endTime = tasks[i].end;
//         }
//     }

//     return min(result, M);
// }

// int main()
// {
//     int N, M;
//     cin >> N >> M;

//     vector<Task> tasks(N);

//     for (int i = 0; i < N; i++)
//     {
//         cin >> tasks[i].start >> tasks[i].end;
//     }
//     // for (int i = 0; i < 5; i++)
//     // {
//     //     cout << tasks[i].start << " " << tasks[i].end << endl;
//     // }
//     // cout << endl;

//     cout << maxTasks(tasks, M) << endl;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

struct Task
{
    int start, end;
};
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    vector<Task> tasks(n);

    for (int i = 0; i < n; i++)
    {
        cin >> tasks[i].start >> tasks[i].end;
    }
    vector<Task> myTasks;
    return 0;
}