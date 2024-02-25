
// int minTop(vector<int>& cost,int n,int i){
//     if(i==n-1){
//         return 0;
//     }
//     int option1 = minTop(cost,n,i+1) + cost[i];
//     int option2 = minTop(cost,n,i+2) + cost[i];
//     return min(option1,option2);
// }

// class Solution {
// public:
//     int minCostClimbingStairs(vector<int>& cost) {
//         // int i = 0;
//         // return minTop(cost,cost.size(),i);
//         int n = cost.size();
//         vector<int> dp(n);
//         dp[0] = cost[0];
//         dp[1] = cost[1];

//         for (int i = 2; i < n; ++i) {
//             dp[i] = min(dp[i - 1], dp[i - 2]) + cost[i];
//         }

//         return min(dp[n - 1], dp[n - 2]);
//     }
// };