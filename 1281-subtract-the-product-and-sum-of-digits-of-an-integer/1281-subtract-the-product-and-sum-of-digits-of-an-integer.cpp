class Solution {
public:
    int subtractProductAndSum(int n) {
       int product = 1;
       int  sum = 0;
        while(0<n){
             int digit = n%10;
            product *= digit ;
            sum += digit;
            n = n/10;
        }
        return product - sum;
    }
};