class Solution {
public:
    bool isPalindrome(string& s , int start , int end){
        while(start < end){
            if(s[start] != s[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
    
    string longestPalindrome(string s) {
        string ans = "";

        // int l = 0;
        // int h  = s.length() - 1;

        for(int i = 0; i < s.size(); i++){
            for(int j = i; j < s.size(); j++){
                if(isPalindrome(s , i , j)){
                    string t = s.substr(i , j-i+1);
                    if(t.size() > ans.size()){
                        ans = t;
                    }
                }
            }
        } //o(n^3)
        return ans;
    }
};
