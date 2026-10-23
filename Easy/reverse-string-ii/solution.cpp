class Solution {
public:
    string reverseStr(string s, int k) {
        int size = s.size();
        for(int i = 0;i<size;){
            if(size>=(i+2*k)){
                reverse(s.begin()+i,s.begin()+i+k);
            }
            else if(k>=size-i && size-i<2*k){
                reverse(s.begin()+i,s.begin()+i+k);
            }
            else{
                reverse(s.begin()+i,s.end());
            }
            i = i+2*k;
        }
        return s;
    }
};