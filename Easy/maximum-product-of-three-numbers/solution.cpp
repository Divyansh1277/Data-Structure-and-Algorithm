class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int pro = 1;
        sort(nums.begin(),nums.end());
        int size = nums.size();
        int i=0;
        int j=0,k=size-1;
        while(i<3){
            if(nums[i]<0 && nums[j]*-1>=nums[k]){
                    pro = nums[j]*pro;
                    j++;
            }
            else{
                    pro = nums[k]*pro;
                    k--;
                }
            i++;
        }
        return pro;
    }
};