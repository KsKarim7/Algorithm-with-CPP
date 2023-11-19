// class Solution {
// public:

//     bool binary(vector<int>nums,int l,int r,int target){

//         int mid = (l+r) /2;
//         if(l == r){
//             return false;
//         }
//         if(nums[l] == target || nums[r] == target){
//             return true;
//         }
//         if(mid > target){
//             binary(nums,l,mid,target);
//         }
//         else if(mid <target){
//             binary(nums,mid,r,target);
//         }
//     };
//     int search(vector<int>& nums, int target) {
//         bool flag = binary(nums,0,nums.size()-1,target);
//         if(flag == true){
//             return 0;
//         }
//         else{
//             return -1;
//         }
//     }
// };