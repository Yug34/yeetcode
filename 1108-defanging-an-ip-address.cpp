class Solution {
public:
    string defangIPaddr(string address) {
        string ans;
        for(char ch : address) {
            if(ch == '.') {
                ans.append("[.]");
                continue;
            }
            ans.push_back(ch);
        }

        return ans;
    }
};