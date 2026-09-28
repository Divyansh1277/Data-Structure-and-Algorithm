class Solution {
public:
    int maxDepth(string s) {
        int o = 0;
        int c = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]==')') c++;
            if(s[i]=='('){
                if(c!=0){
                    o--;
                    c--;
                }
                o++;
            }
        }
        return o;
    }
};