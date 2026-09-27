// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        auto l = 1;
        auto h = n;
        
        while(l<=h){
            int mid = left + (right - left) / 2;
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