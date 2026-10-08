class Solution {
public:
    int getSum(int a, int b) {
        int sum;
        while(b!=0){
        int carry;
         int sum;
         sum = a^b;
         carry = (a & b)<<1;
         a = sum;
         b = carry;
         
         
         }

        return a;
    }
};