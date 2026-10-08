class Solution {
public:
    int reverseBits(int n) {
        string s = "";
        while(n>0){
            if(n%2==0){
                s=s+"0";
                n = n/2;
            }
            else{
                s = s+"1";
                n = n/2;
            }
        }
        reverse(s.begin(),s.end());
        cout<<s;
        return 0;
    }
};