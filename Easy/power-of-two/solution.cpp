class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n%2!=0) return false;
        int a = 2 & n;
        if(a>0) return false;
        return true;
    }
};