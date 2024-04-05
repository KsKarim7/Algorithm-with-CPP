
// void merge(vector <int>&arr,int l,int r,int mid){
//     int l_size = mid - l +1;
//     int r_size = r - mid;
//     int L[l_size+1];
//     int R[r_size+1];

//     for(int i = l,j=0;i<=mid;i++,j++){
//         L[j] = arr[i];
//     }
//     for(int i = mid+1,j=0;i<=r;i++,j++){
//         R[j] = arr[i];
//     }

//     L[l_size] = 9999999999;
//     R[r_size] = 9999999999;

//     int lp = 0,rp = 0;

//     for(int i = l;i<=r;i++){
//         if(L[lp] <= R[rp]){
//             arr[i] = L[lp];
//             lp++;
//         }
//         else{
//             arr[i] = R[rp];
//             rp++;
//         }
//     }
// }

// void dc(vector <int>&arr,int l,int r){
//     if(l == r){
//         return;
//     }
//     int mid = (l + r)/2;
//     dc(arr,l,mid);
//     dc(arr,mid+1,r);
//     merge(arr,l,r,mid);
// }

// void mergeSort(vector < int > & arr, int n) {

//     // Write your code here.
//     dc(arr,0,n-1);

// }