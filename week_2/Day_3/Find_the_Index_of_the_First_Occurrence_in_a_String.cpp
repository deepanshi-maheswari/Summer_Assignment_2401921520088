class Solution {
public:
    int strStr(string haystack, string needle) {
        int pos = haystack.find(needle);
        while(pos != string::npos){
            return pos;
        }
      
        return -1;

    }
};
