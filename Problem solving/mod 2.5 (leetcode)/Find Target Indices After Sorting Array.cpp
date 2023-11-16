// class Solution {
// public:
//     vector<int> targetIndices(vector<int>& nums, int target) {
//         vector<int>v;

//         for(int i = 0;i<nums.size();i++){
//             for(int j = i + 1;j<nums.size();j++){
//                 if(nums[i] > nums[j]){
//                     int temp = nums[i];
//                     nums[i] = nums[j];
//                     nums[j] = temp;
//                 }
//             }
//         }
//         int count = 0;
//         for(auto vv:nums){
//             if(vv == target ){
//                 v.push_back(count);
//             }
//             count++;
//         }
//         return v;
//     }
// };