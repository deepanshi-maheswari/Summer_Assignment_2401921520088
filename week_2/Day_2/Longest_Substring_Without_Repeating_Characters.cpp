class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int j = 0;   //window left pointer
        int maxi = 0;

        set<char> sub;

        for(int i = 0; i < n; i++){
            while(sub.count(s[i])){  //duplicate found inside set
                sub.erase(s[j]); //left duplicate char deleted using j left pointer
                j++;
            }

            sub.insert(s[i]);

            maxi = max(maxi , i - j + 1);
        }


        return maxi;
    }
};
