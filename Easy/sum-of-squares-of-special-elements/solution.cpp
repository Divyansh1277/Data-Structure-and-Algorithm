class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(int i=1;i<=n;i++){
            if(i%n==0) sum = sum+(nums[i-1]*nums[i-1]);
            cout<<sum<<endl;
        }
        return sum;
    }
};