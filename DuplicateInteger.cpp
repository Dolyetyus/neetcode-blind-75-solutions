class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int, int> map;

        for (int i = 0; i<nums.size(); i++){
            if (map.count(nums.at(i)) > 0){
                return true;
            }
            else{
                map[nums.at(i)] = 1;
            }
        }

        return false;
    }
};
