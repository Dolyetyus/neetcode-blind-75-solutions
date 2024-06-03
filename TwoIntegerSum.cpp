class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;

        for (int i = 0; i < nums.size(); i++) {
            int search = target - nums.at(i);
            if (map.find(search) != map.end() && map[search] != i) {
                return {map[search], i};
            }
            map[nums.at(i)] = i;
        }
    }
};
