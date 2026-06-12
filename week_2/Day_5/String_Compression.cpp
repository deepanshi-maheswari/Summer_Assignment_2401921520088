class Solution {
public:
    int compress(vector<char>& chars) {
        int index = 0; // storing frequency of chars
        int count = 1; //num of same char present 
        char prev = chars[index];

        for(int i = 1 ; i < chars.size(); i++){
            if(chars[i] == prev){
                count ++;
            }
            else{
                chars[index++] = prev;
                if(count > 1){
                    //chars[index++] = count;
                    int start = index;
                    while(count){
                        chars[index++] = (count % 10) + '0';
                        count /= 10;
                    }
                    reverse(chars.begin() + start , chars.begin() + index);
                }
                prev = chars[i];
                count = 1;
            }
        }

        chars[index++] = prev;
        if(count > 1){
            //chars[index++] = count;
            int start = index;
            while(count){
                    chars[index++] = (count % 10) + '0';
                    count /= 10;
                }
            reverse(chars.begin() + start , chars.begin() + index);
        } // when i is out of bound

        return index;
    }
};
