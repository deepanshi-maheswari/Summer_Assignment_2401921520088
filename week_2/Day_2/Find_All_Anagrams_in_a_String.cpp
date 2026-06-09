class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n = s.size();
        int m = p.size();

        if(n < m) return {};

        vector<int> freq1(26, 0);
        vector<int> freq2(26, 0);

        for(int i = 0; i < m; i++){
            freq1[s[i] - 'a']++;
        }

        for(char ch: p){
            freq2[ch - 'a']++;
        }

        vector<int> ans;

        if(freq1 == freq2){
            ans.push_back(0);
        }

        for(int i = m; i < n; i++){
            //add new char
            freq1[s[i] - 'a']++;
            //remove old char
            freq1[s[i-m] - 'a']--;

            if(freq2 == freq1) 
                ans.push_back(i-m+1);
        }

        return ans;
    }
};
