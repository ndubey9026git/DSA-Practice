class Solution {
public:
    int reverse(int x) {
        int answer = 0;
        int lastDigit = 0;
        while(x != 0){
            lastDigit = x % 10;
            x = x/10;
            if ( answer > INT_MAX/10 || answer == INT_MAX/10 && lastDigit >7 ) return 0;
            if ( answer < INT_MIN/10 || answer == INT_MIN/10 && lastDigit < -8 ) return 0;
             answer = answer*10 + lastDigit;


        }
 return answer;
    }
};