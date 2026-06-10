class Solution {
public:
    bool isSubsequence(string s, string t) {
        //checking s order maintain inside t string or not
        int i = 0;
        int j = 0;

        while(i < s.size() && j < t.size()){
            if(s[i] == t[j]){
                i++;
            }
            j++;
        }

        if(i == s.size()){
            return true;
        }

        return false;
    }
};
