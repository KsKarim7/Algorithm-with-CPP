// class Solution{

//   public:
//     int dp[1005][1005];

//     int LPS(string A,int n,string B,int m){
//         if(n == 0 || m == 0){
//             return 0;
//         }
//         if(dp[n][m] != -1){
//             return dp[n][m];
//         }
//         if(A[n-1] == B[m-1]){
//             return dp[n][m] = LPS(A,n-1,B,m-1) + 1;
//         }
//         else{
//             int one = LPS(A,n-1,B,m);
//             int two = LPS(A,n,B,m-1);
//             return dp[n][m] = max(one,two);
//         }
//     }

//     int longestPalinSubseq(string A) {
//         //code here
//         string B = A;
//         reverse(B.begin(),B.end());
//         for(int i = 0;i<= A.size();i++){
//             for(int j = 0;j<= B.size();j++){
//                 dp[i][j] = -1;
//             }
//         }
//         return LPS(A,A.size(),B,B.size());
//     }
// };