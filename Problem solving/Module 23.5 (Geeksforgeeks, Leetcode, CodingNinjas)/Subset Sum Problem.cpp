// using namespace std;
// class Solution{
// public:
//     int dp[1005][1005];
//     bool findSum(int n,vector<int>arr,int sum){
//         if(n==0){
//             if(sum==0){
//                 return true;
//             }
//             else{
//                 return false;
//             }
//         }
//         if(dp[n][sum] != -1){
//             return dp[n][sum];
//         }
//         if(arr[n-1] <= sum){
//             bool option1 = findSum(n-1,arr,sum-arr[n-1]);
//             bool option2 = findSum(n-1,arr,sum);
//             return dp[n][sum] = option1 || option2;
//         }
//         else{
//             return dp[n][sum] = findSum(n-1,arr,sum);
//         }

//     }

//     bool isSubsetSum(vector<int>arr, int sum){
//         // code here
//         for (int i = 0; i <= arr.size(); i++)
//         {
//             for (int j = 0; j <= sum; j++)
//             {
//                 dp[i][j] = -1;
//             }
//         }
//         return findSum(arr,arr.size(),sum);
//     }
// };