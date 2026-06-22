class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> mySet;

        int n = nums.size();
        
        for(int i = 0 ; i < n ; i++){
            if( mySet.contains(nums[i]) ){
                return true;
            }
            mySet.insert(nums[i]);
        }

        return false;
    }
};