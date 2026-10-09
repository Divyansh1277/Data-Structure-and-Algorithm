class Solution {
public:
    string reverseWords(string s) {
        vector<string> v;
        int size = s.size();
        string s1 = "";
        for(int i = 0;i<size;i++){
            
            if(s[i]==' '){
                v.push_back(s1);
                s1 = "";
            }
            else s1 = s1+s[i];
        }
        for(int i = 0;i<size;i++){
            cout<<v[i]<<" ";
        }
        return s;
    }
};