class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int pro = 1;
        sort(nums.begin(),nums.end())
        for(int i=nums.size()-1;i>nums.size()-4;i--){
            pro = pro*nums[i];
        }
        return pro;
    }
};