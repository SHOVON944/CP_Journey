class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int reserve = x;
        long long store = 0;
        while(x!=0){
            store = store*10 + x % 10;
            x /= 10;
        }
        return reserve==store;
    }
};