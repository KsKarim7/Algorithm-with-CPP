// class Solution {
//   public:

//     long long int count(int coins[], int N, int sum) {

//         // code here.
//         long long dp[N+1][sum+1];
//         dp[0][0]=1;
//         for(int i = 1;i<=sum;i++){
//             dp[0][i] = 0;
//         }
//         for(int i = 1;i<=N;i++){
//             for(int j = 0;j<= sum;j++){
//                 if(coins[i-1] <= j){
//                     dp[i][j] = dp[i][j-coins[i-1]] + dp[i-1][j];
//                 }
//                 else{
//                     dp[i][j] = dp[i-1][j];
//                 }
//             }
//         }
//         return dp[N][sum];
//     }
// }