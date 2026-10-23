class Solution {
public:
    string reverseStr(string s, int k) {
        int size = s.size();
        for(int i = 0;i<size;){
            if(size>=2k-1){
                rev(s.begin()+i,s.begin()+i+k-1);
            }
            else if(k>=size-1 && size-i<2k){
                rev(s.begin()+i,s.begin()+i+k-1);
            }
            else{
                rev(s.begin()+i,s.begin()+i+(size-1));
            }
            i = i+2k;
        }
        return s;
    }
};