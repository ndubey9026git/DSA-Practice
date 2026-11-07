class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        if ( n <= 0) return false;
        return (n & ( n - 1)) == 0; // motre optimal o(1) both tc,sc
    }
};
/*while( n%2==0) {
    n /=2;
}   o( log base2 n)
return n==1; */