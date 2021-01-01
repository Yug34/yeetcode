class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans = {nums[0], nums[n]};
        for(int i = 1; i < n; i++) {
            ans.push_back(nums[i]);
            ans.push_back(nums[i+n]);
        }
        return ans;
    }
};