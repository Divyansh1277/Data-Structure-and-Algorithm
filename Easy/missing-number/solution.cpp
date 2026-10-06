class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            sum = sum+nums[i];
        }
        int n = nums.size();
        int fsum = (n*(n+1))/2;
        return fsum-sum;
    }
};