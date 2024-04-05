// #include <bits/stdc++.h>

// void merge(vector<int>&arr,int l,int r,int mid){
//     int l_size = mid - l +1;
//     int r_size = r - mid;
//     int L[l_size +1];
//     int R[r_size +1];

//     for(int i = l,j=0;i<=mid;j++,i++){
//         L[j] = arr[i];
//     }
//     for(int i = mid+1,j= 0;i<=r;j++,i++){
//         R[j] = arr[i];
//     }
//     L[l_size] = 9999999999;
//     R[r_size] = 9999999999;

//     int lp = 0,rp=0;

//     for(int i = l;i<=r;i++){
//         if(L[lp]<=R[rp]){
//             arr[i] = L[lp];
//             lp++;
//         }
//         else{
//             arr[i]=R[rp];
//             rp++;
//         }
//     }
// }

// void mergeSort(vector<int> &arr,int l,int r){
//     if(l == r){
//         return;
//     }
//     int mid = (l+r)/2;
//     mergeSort(arr,l,mid);
//     mergeSort(arr,mid+1,r);
//     merge(arr,l,r,mid);
// }

// int findSecondLargest(int n, vector<int> &arr)
// {
//     // Write your code here.
//     mergeSort(arr,0,n-1);
//     int f = 0;
//     int j = arr[n-1];
//     // return j;
//     for(int i = 0;i<n;i++){
//         if(arr[i]==j){
//             return 1000;
//         }
//         if(arr[i]>f){
//             f = arr[i];
//         }
//     }
//     if(count(arr.begin(), arr.end(), f)==n-1){
//         return -1;
//     }
//     else{
//         return f;
//     }
// }