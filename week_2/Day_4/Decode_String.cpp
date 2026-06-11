class Solution {
public:
    string decodeString(string s) {
        int n = s.size();

        stack<int> numStack;
        stack<string> strStack;

        int currNum = 0;
        string currString = "";

        for(char ch:s){
            if(isdigit(ch)){
                currNum = currNum * 10  + (ch - '0');
            }
            else if(ch == '['){
                numStack.push(currNum);
                strStack.push(currString);

                currNum = 0;
                currString = "";
            }
            else if(ch == ']'){
                int repeat = numStack.top();
                numStack.pop();

                string prev = strStack.top();
                strStack.pop();

                //repeat char till currNum
                while(repeat--){
                    prev += currString;
                }

                currString = prev;
            }
            else{
                currString += ch;
            }
        }

        return currString;
    }
};
