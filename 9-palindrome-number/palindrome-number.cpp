class Solution {
public:
    bool isPalindrome(int num) {
        int rev = 0;
        int x = num;
           if (x < 0 || (x % 10 == 0 && x != 0)) return false;

        while (x != 0) {
            int digit = x % 10;
            if (rev > INT_MAX / 10 || rev == INT_MAX / 10 && digit > 7)
                return false;
            rev = (rev * 10) + digit;

            x /= 10;
        }
        if (num != rev)
            return false;
        else
            return true;
    }
};