class Solution {
public:
    vector<vector<int>> res;
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int> cur;
        backtrack(nums, target, cur, 0);
        return res;
    }

    void backtrack(vector<int>& nums, int target, vector<int>& cur, int i) {
        if (target == 0) {
            res.push_back(cur);
            return;
        }
        if (target < 0 || i >= nums.size()) {
            return;
        }

        cur.push_back(nums[i]);

        // this one makes sure we can have one val multiple times
        backtrack(nums, target - nums[i], cur, i);
        cur.pop_back();

        // this one makes sure k once we move forward we never go back , so 
        // and through this we are able to have say , 2 2 2 3 ya 2 2 2 4  , matlab 2 multiple
        // times k baad different number
        backtrack(nums, target, cur, i + 1);
    }
};