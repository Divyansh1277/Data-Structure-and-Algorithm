class Solution {
public:
    int arrangeCoins(int n) {
        int count = 0;
        int sum = 0;
        for(int i=1,j=n;i<j;i++,j--){
            count = j;
        }
        return count;
    }
};