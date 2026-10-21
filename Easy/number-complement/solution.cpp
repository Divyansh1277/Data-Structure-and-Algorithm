class Solution {
public:
    int findComplement(int num) {
        string s = "";
        while(num>0){
            s = s+to_string(num%2);
            num = num/2;
        }
        cout<<s;
        int n = stoi(s);
        int m = n^0;
        cout<<m;
        s = to_string(m);
        for(int i=0;i<s.size();i++){
            if(s[i]=='1') s[i]='0';
            else s[i]='1';
        }
        cout<<endl<<s;
        int sum = 0;
        int j=0;
        for(int i=s.size()-1;i>0;i--){
            if(s[i]=='0'){
                j++;
            }
            else{
                sum = sum+pow(2,j++);
            }
        }
        return sum;
    }
};