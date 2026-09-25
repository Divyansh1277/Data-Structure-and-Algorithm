class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int size = nums.size();
        int a = 1;
        int b = 0;
        for(int i=0;i<size-b;i++){
            int temp = nums[size-a];
            if(nums[i]==val){
                nums[size-a] = nums[i];
                nums[i] = temp;
                a++;
                if(nums[i]==val){
                    int temp = nums[i];
                    nums[size-a] = nums[i];
                    nums[i] = temp;
                    a++;
                }
            }
            else b++;
        }
        return size-b;
    }
};