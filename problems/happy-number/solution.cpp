class Solution {
public:
    bool isHappy(int n) {
        
        unordered_set<int>s;
        while( n !=1 && s.count(n)==0 ){
            s.insert(n);
            int sum =0;
             while(n>0){
           int lastdigit = n % 10;
            sum += lastdigit*lastdigit;
            n /=10;


             }
             n = sum;
       

        }
if ( n==1){ return true;}
else return false;
        
    }
};