class Solution {
public:
    bool isPalindrome(int x) {
        int num = x;
        int ans = 0;
        
        
        while( num > 0){
         int lastdigit = num % 10;
        ans = ans*10 +lastdigit;
        num = num/10;


        }
        if(ans == x){ return true;
        }
        else{
            return false;
        }
    }
};