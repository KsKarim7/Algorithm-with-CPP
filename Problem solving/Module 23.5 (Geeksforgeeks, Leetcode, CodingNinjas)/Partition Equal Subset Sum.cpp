// class Solution
// {
// public:
//     bool canPartition(vector<int> &nums)
//     {
//         int sum = 0;
//         int n = nums.size();
//         for (int i = 0; i < nums.size(); i++)
//         {
//             sum += nums[i];
//         }
//         if (sum % 2 == 0)
//         {
//             int portion = sum / 2;
//             bool dp[n + 1][portion + 1];
//             dp[0][0] = true;
//             for (int i = 1; i <= portion; i++)
//             {
//                 dp[0][i] = false;
//             }
//             for (int i = 1; i <= n; i++)
//             {
//                 for (int j = 0; j <= portion; j++)
//                 {
//                     if (nums[i - 1] <= j)
//                     {
//                         dp[i][j] = dp[i - 1][j - nums[i - 1]] || dp[i - 1][j];
//                     }
//                     else
//                     {
//                         dp[i][j] = dp[i - 1][j];
//                     }
//                 }
//             }
//             return dp[n][portion];
//         }
//         else
//         {
//             return false;
//         }
//     }
// }