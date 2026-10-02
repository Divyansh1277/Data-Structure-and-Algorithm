class Solution {
public:
    int strStr(string haystack, string needle) {
        int i = lower_bound(haystack.start(),haystack.end(),needle);
        return i;
    }
};