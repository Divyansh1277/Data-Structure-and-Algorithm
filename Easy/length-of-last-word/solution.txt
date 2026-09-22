class Solution {
public:
    int lengthOfLastWord(string s) {
        vector<string> v;
        
        // for(int i=0;i<s.length();i++){
        //     string s1="";
        //     for(int j=i;j<s.length();j++){
        //         if(s[j]==' ') break;
        //         s1 = s1 + s[j];
        //     }
        //     cout<<s1;
        //     v.push_back(s1);
        // }
        int i=0;
        while(i<s.length()){
            
            string s1="";
            while(i<s.length() and s[i]!=' '){
                s1 = s1+s[i];
                i++;
            }
            if(s1!=""){
                v.push_back(s1);
            }
            i++;
            // cout<<v[v.size()-1]<<" "<<"A";
        }
        return v[v.size()-1].length();
    }
};