// class Solution {
// public:
//     int dp[1005][1005];

//     int LCS(string s,int n,string ss,int m){
//         if(n == 0 || m == 0){
//             return 0;
//         }
//         if(dp[n][m] != -1){
//             return dp[n][m];
//         }
//         if(s[n-1] == ss[m-1]){
//             return dp[n][m] = LCS(s,n-1,ss,m-1) + 1;
//         }
//         else{
//             int one = LCS(s,n-1,ss,m);
//             int two = LCS(s,n,ss,m-1);
//             return dp[n][m] = max(one,two);
//         }
//     }

//     bool isSubsequence(string s, string t) {
//         for(int i = 0;i<=s.size();i++){
//             for(int j = 0;j<=t.size();j++){
//                 dp[i][j] = -1;
//             }
//         }
//         int ans = LCS(s,s.size(),t,t.size());
//         if(ans == s.size()){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
// }