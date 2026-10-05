class Solution {
public:
    void dorotate(vector<int> &v,int i,int j){
        while(i<j){
            swap(v[i],v[j]);
        }
    }
    void rotate(vector<int>& nums, int k) {
        int size = nums.size();
        doratate(0,size-k-1);
        dorotate(size-k,size-1);
        dorotate(0,size-1);
    }
};