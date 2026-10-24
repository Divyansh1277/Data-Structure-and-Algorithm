class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int pro = 1;
        sort(nums.begin(),nums.end());
        int size = nums.size();
        pro = nums[size-1]*nums[size-2]*nums[size-3]
        return pro;
    }
};