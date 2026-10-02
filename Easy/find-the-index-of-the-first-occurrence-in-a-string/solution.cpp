class Solution {
public:
    int strStr(string haystack, string needle) {
        int size = haystack.size();
        int i = lower_bound(haystack[0],haystack[size-1],needle);
        return i;
    }
};