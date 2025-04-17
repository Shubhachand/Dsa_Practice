class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long sum=0;
        long n=x;
        while(x!=0){
            int rem=x%10;
            sum=sum*10+rem;
            x=x/10;
        }
        if(n==sum){
            return true;
        }
        return false;
    }
};