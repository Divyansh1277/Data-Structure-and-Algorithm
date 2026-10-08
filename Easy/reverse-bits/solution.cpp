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
        if(s.size()<32){
            while(s.size()!=32){
                s = s+"0";
            }
        }
        // reverse(s.begin(),s.end());
        cout<<s;
        int sum = 0;
        for(int i=s.size()-1;i>=0;i--){
            sum = sum+pow(2,i)* stoi(s[i]);
        
        cout<<sum;
        return 0;
    }
};