class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        for (int i = 0; i<numbers.size(); i++){
            int seek = target - numbers.at(i);
            int id = i;

            while (numbers.at(id)<seek && id<numbers.size()-1){
                id++;
            }

            if (numbers.at(id)==seek){
                return {i+1, id+1};
            }
        }
        return {};
    }
};
