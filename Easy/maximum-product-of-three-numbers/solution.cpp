class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int pro = 1;
        for(int i=0;i<nums.size();i++){
            pro = pro*nums[i];
        }
        return pro;
    }
};