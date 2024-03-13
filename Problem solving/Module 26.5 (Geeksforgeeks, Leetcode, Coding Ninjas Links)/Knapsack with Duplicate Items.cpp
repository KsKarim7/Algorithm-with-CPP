// int knapSack(int N, int W, int val[], int wt[])
// {
//     // code here
//     if(N == 0 || W == 0){
//         return 0;
//     }
//     if (dp[N][W] != -1)
//     {
//         return dp[N][W];
//     }
//     if(wt[N-1] <= W){
//         int option1 = val[N-1] + knapSack(N,W-wt[N-1],val,wt) ;
//         int option2 = knapSack(N-1,W,val,wt);
//         return dp[N][W] = max(option1,option2);
//     }
//     else{
//         return dp[N][W] = knapSack(N-1,W,val,wt);
//     }
// }
