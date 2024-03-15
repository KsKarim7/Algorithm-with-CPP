// class Solution {
// public:
//     string shortestCommonSupersequence(string s, string ss) {
//         int n = s.size();
//         int m = ss.size();
//         int dp[n+1][m+1];
//         for(int i = 0;i<=n;i++){
//             for(int j = 0;j<=m;j++){
//                 if(i == 0 || j == 0){
//                     dp[i][j] = 0;
//                 }
//             }
//         }
//         for(int i = 1;i<=n;i++){
//             for(int j = 1;j<=m;j++){
//                 if(s[i-1] == ss[j-1]){
//                     dp[i][j] = dp[i-1][j-1] +1;
//                 }
//                 else{
//                     dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
//                 }
//             }
//         }
//         int i = n,j=m;
//         string ans;
//         while(i != 0 && j != 0){
//             if(s[i-1] == ss[j-1]){
//                 ans += s[i-1];
//                 i--;
//                 j--;
//             }
//             else if(dp[i-1][j] > dp[i][j-1]){
//                 ans += s[i-1];
//                 i--;
//             }
//             else{
//                 ans += ss[j-1];
//                 j--;
//             }
//         }
//         while(i != 0){
//             ans+= s[i-1];
//             i--;
//         }
//         while(j != 0){
//             ans+= ss[j-1];
//             j--;
//         }
//         reverse(ans.begin(),ans.end());
//         return ans;

//     }
// }