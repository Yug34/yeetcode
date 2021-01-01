class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int len = candies.size();
        int max = 0;

        for (int val : candies) {
            if (val > max) {
                max = val;
            }
        }

        vector<bool> ans;
        for (int val : candies) {
            if((val + extraCandies) >= max) {
                ans.push_back(true);
                continue;
            }
            ans.push_back(false);
        }

        return ans;
    }
};