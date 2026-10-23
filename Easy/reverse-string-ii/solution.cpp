class Solution {
public:
    string reverseStr(string s, int k) {
        int size = s.size();
        for(int i = 0;i<size;){
            if(size>=i+2*k-1){
                reverse(s.begin()+i,s.begin()+i+k-1);
            }
            else if(k>=size-i && size-i<2*k){
                reverse(s.begin()+i,s.begin()+i+k-1);
            }
            else{
                reverse(s.begin()+i,s.begin()+i+(size-1));
            }
            i = i+2*k;
        }
        return s;
    }
};