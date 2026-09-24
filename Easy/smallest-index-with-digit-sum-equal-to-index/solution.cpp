class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int count = 0;
        int sum;
        for(int i=0;i<nums.size();i++){
            sum = 0;
            while(nums[i]>0){
                int a = nums[i]%10;
                sum += a;
                nums[i] /= 10;
            }
            if(sum==i){
                count++;
                break;
            }
        }
        if(count==0) return -1;
        else return sum;
    }
};