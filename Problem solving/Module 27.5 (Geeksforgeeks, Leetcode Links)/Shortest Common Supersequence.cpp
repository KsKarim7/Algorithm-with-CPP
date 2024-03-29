// class Solution
// {
//     public:
//     //Function to find length of shortest common supersequence of two strings.
//     int shortestCommonSupersequence(string X, string Y, int m, int n)
//     {
//         //code here
//         int dp[m+1][n+1];
//         for(int i = 0;i<=m;i++){
//             for(int j = 0;j<=n;j++){
//                 if(i==0 || j==0){
//                     dp[i][j] = 0;
//                 }
//             }
//         }
//         for(int i = 1;i<=m;i++){
//             for(int j = 1;j<=n;j++){
//                 if(X[i-1] == Y[j-1]){
//                     dp[i][j] = dp[i-1][j-1] + 1;
//                 }
//                 else{
//                     dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
//                 }
//             }
//         }
//         return m+n-dp[m][n];
//     }
// }