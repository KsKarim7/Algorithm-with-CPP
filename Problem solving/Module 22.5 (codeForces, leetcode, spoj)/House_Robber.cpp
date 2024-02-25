// class Solution
// {
// public:
//     int heist(vector<int> &nums, int n, bool flag)
//     {
//         if (n <= 0)
//         {
//             return nums[0];
//         }
//         // if(flag == false){
//         //     return heist(nums,n-2,true);
//         // }
//         return heist(nums, n - 1, true) + nums[n - 1];
//     }
//     int rob(vector<int> &nums)
//     {
//         return heist(nums, nums.size(), true);
//     }
// }