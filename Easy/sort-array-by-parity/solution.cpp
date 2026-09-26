bool comp(int a,int b){
    if(a%2==0 && b%2!=0) return true;
    if(a!=0 && b%2==0) return false;
    return a>b;
}
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        sort(nums.begin(),nums.end(),comp);
        return nums;
    }
};