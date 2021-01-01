class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        short len = nums.size();
        int counter = 0;
        for (short i = 0; i < len - 1; i++) {
            for(short j = len - 1; j > i; j--) {
                if(nums[i] == nums[j]) {
                    counter++;
                }
            }
        }

        return counter;
    }
};