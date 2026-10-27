class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        bool flag = true;
        int h = k;
        while(flag){
            int n = 1;
            
            for(int i=0;i<nums.size();i++){
                int count = 0;
                for(int j=0;j<nums.size();j++){
                    if(nums[j]==k){
                        n++;
                        k =h*n;
                        count++;
                        break;
                    }
                }
                
                if(count>0) continue;
                else {
                    flag = false;
                    break;
                }
                
            }
        }
        return k;
    }
};