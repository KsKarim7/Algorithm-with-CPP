// #include <bits/stdc++.h>

// 	void merge(vector<int>&v,  int l,int r,int mid){
//         int l_size = mid-l+1;
//         int L[l_size +1];

//         int r_size = r - mid;
//         int R[r_size+1];

//         for(int i=l,j=0;i<=mid;i++,j++){
//             L[j] = v[i];
//         }
//         for(int i = mid+1,j=0;i<=r;i++,j++){
//             R[j]=v[i];
//         }

//         L[l_size]= INT_MAX;
//         R[r_size]= INT_MAX;

//         int lp =0,rp=0;
//         for(int i = l;i<=r;i++){
//             if(L[lp] <= R[rp]){
//                 v[i]=L[lp];
//                 lp++;
//             }
//             else{
//                 v[i]=R[rp];
//                 rp++;
//             }
//         }
//     }

//     void mergesort(vector<int>&v,int l,int r){
//         if(l == r){
//             return;
//         }
//         int mid = (l+r)/2;
//         mergesort(v,l,mid);
//         mergesort(v,mid+1,r);
//         merge(v,l,r,mid);
//     }

// int findDuplicate(vector<int> &arr, int n){
// 	// Write your code here.
// 	// int x;
// 	// cin>>x;
// 	// for(int i = 0;i<x;i++){
// 	// 	int y;
// 	// 	cin>>y;
// 	// 	for(int j = 0;j<y;i++){
// 	// 		int k;
// 	// 		cin>>k;
// 	// 		arr.push_back(k);
// 	// 	}
// 	// }
// 	mergesort(arr,0,n-1);
// 	for(int i = 0,j=1;i<n-1;i++,j++){
// 		if(arr[i] == arr[j]){
// 			return arr[i];
// 		}
// 	}
//     // for(int i = 0;i<n;i++){
//     //     if(count(arr.begin(), arr.end(),arr[i]) > 1){

//     //         return arr[i];
//     //     }
//     // }

// }
