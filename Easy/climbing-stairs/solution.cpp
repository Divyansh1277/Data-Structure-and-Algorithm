class Solution {
public:
    int climbStairs(int n) {
        if(n==1 || n==2) return n;
        int i=1,j=2,k=0;
        for(int l=3;l<=k;l++){
            k = i+j;
            i = j;
            j = k;
        }
        return k;
    }
};