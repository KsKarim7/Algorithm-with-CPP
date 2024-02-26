// int dp[1005][1005];

// int countSums(vector<int>&arr,int n,int sum){
// 	if(n == 0){
// 		if(sum == 0){
// 			return 1;
// 		}
// 		else{
// 			return 0;
// 		}
// 	}
// 	if(dp[n][sum] != -1){
// 		return dp[n][sum];
// 	}
// 	if(arr[n-1] <= sum){
// 		int option1 = countSums(arr,n-1,sum- arr[n-1]);
// 		int option2 = countSums(arr,n-1,sum);
// 		return dp[n][sum] = option1 + option2;
// 	}
// 	else{
// 		return dp[n][sum] = countSums(arr,n-1,sum);
// 	}
// }

// int findWays(vector<int>& arr, int k)
// {
// 	// Write your code here.
// 	for(int i = 0;i<=arr.size();i++){
// 		for(int j = 0;j<=k;j++){
// 			dp[i][j] = -1;
// 		}
// 	}
// 	return countSums(arr,arr.size(),k);
// }