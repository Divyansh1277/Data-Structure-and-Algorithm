class Solution {
public:
    string reverseWords(string s) {
        vector<string> v;
        int size = s.size();
        string s1 = "";
        for(int i = 0;i<size;i++){
            // if(i==0 and s[i]==' ' || i==size-1 and s[i]==' ') continue;
            if(s[i]==' '){
                v.push_back(s1);
                // v.push_back(" ");
                s1 = "";
            }
            else s1 = s1+s[i];
        }
        v.push_back(s1);
        reverse(v.begin(),v.end());
        string s2 = "";
        for(int i=0;i<v.size();i++){
            s2 = s2+v[i];
        }
        // for(int i = 0;i<size;i++){
        //     cout<<v[i]<<" ";
        // }
        return s2;
    }
};