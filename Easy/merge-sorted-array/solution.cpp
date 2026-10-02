class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0,j = 0;
        while(j<n & i<m){
            if(nums1[i]==0){
                nums1[i]=nums2[j];
                i++;
                j++;
            }
            if(nums1[i]<=nums2[j]){
                i++;
            }
            else{
                int temp = nums1[i];
                nums1[i] = nums2[j];
                nums1[i+1] = temp;
                j++;
            }
        }
    }
};