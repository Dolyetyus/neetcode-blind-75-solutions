class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int longest = 0;

        for (int i = 0; i<s.size(); i++){
            map<char, int> hashmap;
            int current_length = 0;

            for (int ii = i; ii<s.size(); ii++){
                if (hashmap.find(s[ii])!=hashmap.end()){
                    i = hashmap[s[ii]];
                    current_length = ii - i + 1;
                    break;
                }

                hashmap[s[ii]] = ii;
                current_length++;
                longest = max(current_length, longest);
            }
        }

        return longest;
    }
};
