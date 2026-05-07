class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int , int> mp;

        for(int i = 0 ; i<nums.size() ; i++){
            
            mp[nums[i]]++;
            auto it = mp.find( nums[i] );
            if( it != mp.end() && it->second > 1  ) return true;
            
        }

        return false;
    }
};