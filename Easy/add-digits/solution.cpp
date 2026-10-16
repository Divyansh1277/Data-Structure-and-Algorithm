class Solution {
public:
    int addDigits(int num) {
        int a = 0;
        while(num>=10){
            int b = 0;
            while(num>0){
                b=b+num%10;
                num = num/10;
            }
            num = b;
        }
        return num;
    }
};