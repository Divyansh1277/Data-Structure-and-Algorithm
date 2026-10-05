class Solution {
public:
    void dorotate(vector<int> &v,int i,int j){
        while(i<j){
            swap(v[i],v[j]);
            i++;
            j--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int size = nums.size();
        if(k>=size) return;
        dorotate(nums,0,size-k-1);
        dorotate(nums,size-k,size-1);
        dorotate(nums,0,size-1);
    }
};