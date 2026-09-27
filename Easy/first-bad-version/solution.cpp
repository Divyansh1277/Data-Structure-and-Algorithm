// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l = 0;
        int h = n;
        int mid = (l+h)/2;
        while(l!=h){
            if(isBadVersion(mid)){
                h = mid-1;
            }
            else{
                l = mid+1;
            }
        }
        return l;
    }
};