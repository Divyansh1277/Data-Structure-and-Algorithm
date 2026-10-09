class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        int i = 0;
        while(i!=s.size()){
            int j = i;
            while(s[j]!=' '){
                j++;
            }
            int k = j;
            j--;
            while(i<j){
                swap(s[i],s[j]);
                i++;j--;
            }
            i = k;
        }
        cout<<s;
        return s;

    }
};