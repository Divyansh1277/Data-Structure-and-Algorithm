class Solution {
public:
    int addDigits(int num) {
        int a = 0;
        while(num>10){
            int b = num;
            while(b>0){
                b=b+num%10;
                b = b/10;
            }
            num = b;
        }
        return num;
    }
};