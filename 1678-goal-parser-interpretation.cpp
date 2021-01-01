class Solution {
public:
    string interpret(string command) {
        short len = command.size();
        string ans;
        for (short i = 0; i < len; i++) {
            if(command[i] == 'G') {
                ans.push_back('G');
                continue;
            }
            if(command[i+1] == ')') {
                ans.push_back('o');
                i+=1;
                continue;
            }
            ans.append("al");
            i+=3;
        }

        return ans;
    }
};