class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();

        for(int i = 1; i <= n/2; i++){
            if(n % i != 0)  
                continue;

          //exterating pattern that repeat multiple times
            string pattern = s.substr(0 , i);
            string temp = "";

            int repeatation = n / i;

            for(int j = 0; j < repeatation; j++){
                temp += pattern;
            }

          //check pattern repeated string equal to original string s
            if(temp == s){
                return true;
            }
        }

        return false;
    }
};
