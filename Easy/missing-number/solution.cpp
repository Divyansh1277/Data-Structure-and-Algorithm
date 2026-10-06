class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int a = 0;
        
        for(int i=0;i<nums.size();i++){
            int count = 0;
            for(int j=0;j<nums.size();j++){
                if(nums[j]==a){
                    count++;
                    a++;
                    break;
                }
                
            }
            if(count>0) continue;
            else break;
        }
        return a;
    }
};