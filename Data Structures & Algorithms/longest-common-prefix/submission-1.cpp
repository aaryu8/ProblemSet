class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        
        int n = strs.size();
        
        sort(strs.begin() , strs.end());

        int m = strs[0].length();
        
        string a1 = strs[0];
        string a2 = strs[n-1];

        for(int i = 0 ; i<m ; i++){
            if( a1[i] == a2[i] ) { 
                ans += a1[i];
            } else {
                break;
            }
        }

        return ans;
    }
};