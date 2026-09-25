class Solution {
public:
    bool isValid(string s) {
        int count = 0;
        for(int i=0;i<s.size()-1;i = i+2){
            if(s[i]=='(' && s[i+1]==')') continue;
            else if(s[i]=='[' && s[i+1]==']') continue;
            else if(s[i]=='{' && s[i+1]=='}') continue;
            else count++;
        }
        if(count==0) return true;
        else return false;
    }
};