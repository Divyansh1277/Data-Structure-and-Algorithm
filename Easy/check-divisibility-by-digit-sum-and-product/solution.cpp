class Solution {
public:
    bool checkDivisibility(int n) {
        int a = n;
        int sum=0;
        while(a>0){
            sum = sum+a%10;
            a = a/10;
        }
        int b = n;
        int sum1 = 1;
        while(b>0){
            sum1 = sum1*b%10;
            b = b/10;
        }
        sum = sum+sum1;
        if(sum%n==0){
            return true;
        }
        else return false;
    }
};