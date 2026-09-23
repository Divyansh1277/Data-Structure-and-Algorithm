class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int count = 0;
        while(x>0){
            if(nums.size()>0){
            int a = nums.front();
            int b = nums.back();
            if(a>=b){
                if(x>=a){
                    x = x-a;
                    count++;
                    nums.erase(nums.begin());
                }
                else{
                    x = x-b;
                count++;
                nums.pop_back();
                }
            }
            else{
                if(x>=b){
                    x = x-b;
                    count++;
                    nums.pop_back();
                }
                else{
                    x = x-a;
                    count++;
                    nums.erase(nums.begin());
                }
            }
            }
        }
        if(x==0) return count;
        else return -1;
    }
};