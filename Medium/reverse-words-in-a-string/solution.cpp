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
        v.push_back(s1);
        reverse(v.begin(),v.end());
        string s2 = "";
        for(int i = 0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        for(int i=0;i<v.size();i++){
            if(i==v.size()-1 && v[v.size()-1]=="") continue;
            if(v[i]=="") continue;
            
            if(i==v.size()-1) s2 = s2+v[i];
            else s2 = s2+v[i]+" ";
        }
        
        return s2;
    }
};