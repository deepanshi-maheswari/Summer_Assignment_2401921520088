class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.length() - 1;

        while(left < right){
            //eliminate space from left
            while(left < right && !isalnum(s[left])){
                left++;
            }

            //eliminate space from right
            while(left < right && !isalnum(s[right])) {
                right--;
            }

            //swap the character
            if(tolower(s[left]) != tolower(s[right])) {
                return false;
            }

            left++;
            right--;
        }

        return true;
    }
};
