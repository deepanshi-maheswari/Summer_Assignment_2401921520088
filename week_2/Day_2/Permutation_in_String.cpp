class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();

        if(n > m) return false;

        vector<int> freq1(26,0);
        vector<int> freq2(26,0);

        for(char ch:s1){
            freq1[ch - 'a']++;
        }

        //storing freq of sliding window size of n
        for(int i = 0; i < n; i++){
            freq2[s2[i] - 'a']++;
        }

        if(freq1 == freq2)
            return true;
        

        for(int i = n; i < m; i++){
            //new character add
            freq2[s2[i] - 'a']++;
            //remove old char
            freq2[s2[i - n] - 'a']--;

            if(freq1 == freq2)
                return true;
            
        }

        return false;
    }
};
