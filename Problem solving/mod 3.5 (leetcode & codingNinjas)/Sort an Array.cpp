// class Solution {
// public:
//     void merge(vector<int>&v,  int l,int r,int mid){
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

//     vector<int> sortArray(vector<int>& nums) {
//         mergesort(nums,0,nums.size()-1);
//         return nums;
//     }
// };