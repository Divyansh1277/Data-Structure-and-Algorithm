class Solution {
public:
    bool checkDivisibility(int n) {
        if(n<10) return false;
        int a = n;
        int sum=0;
        while(a>0){
            sum = sum+a%10;
            a = a/10;
        }
        int b = n;
        cout<<sum;
        int sum1 = 1;
        while(b>0){
            sum1 = sum1*(b%10);
            b = b/10;
        }
        cout<<endl<<sum1;
        sum = sum+sum1;

        if(sum%n==0){
            return true;
        }
        if(n%sum==0) return true;
        else return false;
    }
};