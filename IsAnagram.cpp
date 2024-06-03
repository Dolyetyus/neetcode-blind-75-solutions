class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }
        
        map<char, int> map1;
        map<char, int> map2;

        for (int i = 0; i < s.size(); i++) {
            map1[s[i]]++;
            map2[t[i]]++;
        }

        for (auto& pair: map1) { 
            if (map2[pair.first] != pair.second) { 
                return false;
            } 
        } 

        return true;
    }
};
