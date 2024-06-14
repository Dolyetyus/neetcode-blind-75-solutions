class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ret;
        map<string, int> hashmap;
        int counter = 0;

        for (int i = 0; i<strs.size(); i++){
            string sortedWord = strs.at(i);
            sort(sortedWord.begin(), sortedWord.end());
            
            if (hashmap.find(sortedWord) == hashmap.end()){
                hashmap[sortedWord] = counter;
                ret.push_back(vector<string>{strs.at(i)});
                counter++;
            }
            else{
                int index = hashmap[sortedWord];
                ret.at(index).push_back(strs.at(i));
            }
        }

        return ret;
    }
};
