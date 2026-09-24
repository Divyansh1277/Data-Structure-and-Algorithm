class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int count = 0;
        for(int i=0;i<nums.size();i++){
            int sum = 0;
            while(nums[i]>0){
                int a = nums[i]%10;
                sum += a;
                nums[i] /= 10;
            }
            if(sum==i){
                return sum;
            }
        }
    }
};