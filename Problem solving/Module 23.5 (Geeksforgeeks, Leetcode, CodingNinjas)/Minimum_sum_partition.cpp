// class Solution
// {

// public:
//     int minDifference(int arr[], int n)
//     {
//         // Your code goes here
//         int sum = 0;
//         for (int i = 0; i < n; i++)
//         {
//             sum += arr[i];
//         }
//         bool dp[n + 1][sum + 1];
//         dp[0][0] = true;
//         for (int i = 1; i <= sum; i++)
//         {
//             dp[0][i] = false;
//         }
//         for (int i = 1; i <= n; i++)
//         {

//             for (int j = 0; j <= sum; j++)
//             {
//                 if (arr[i - 1] <= j)
//                 {
//                     dp[i][j] = dp[i - 1][j - arr[i - 1]] || dp[i - 1][j];
//                 }
//                 else
//                 {
//                     dp[i][j] = dp[i - 1][j];
//                 }
//             }
//         }
//         vector<int> v;
//         for (int i = 0; i <= n; i++)
//         {
//             for (int j = 0; j <= sum; j++)
//             {
//                 if (dp[i][j] == 1)
//                     v.push_back(j);
//             }
//         }
//         int ans = INT_MAX;
//         for (int val : v)
//         {
//             int s1 = val;
//             int s2 = sum - s1;
//             ans = min(ans, abs(s1 - s2));
//         }
//         return ans;
//     };
// };