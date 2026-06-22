class Solution {
public:
    bool isAnagram(string s, string t) {
        int len1 = s.length();
        int len2 = t.length();

        if(len1 != len2 ) return false;
        
        unordered_map<char , int> map1;
        unordered_map<char , int> map2;

        for(int i = 0 ; i < len1 ; i++){
            map1[s[i]]++;
        }

        for(int i = 0 ; i < len2 ; i++){
            map2[t[i]]++;
        }

        if( map1 == map2 ){
            return true;
        }

        return false;

    }
};
