class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int people = accounts.size();
        int banks = accounts[0].size();

        int max = 0;
        for(int i = 0; i < people; i++) {
            int sum = 0;
            for(int j = 0; j < banks; j++) {
                sum += accounts[i][j];
            }
            if(sum > max) {
                max = sum;
            }
        }

        return max;
    }
};