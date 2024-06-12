class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> hashmap;
        vector<int> ret;
        priority_queue<pair<int, int>> maxHeap;

        for (int i = 0; i<nums.size(); i++){
            hashmap[nums.at(i)]++;
        }
        
        for(auto &it: hashmap){
            maxHeap.push({it.second, it.first});
            if(maxHeap.size() > (int)hashmap.size() - k){
                ret.push_back(maxHeap.top().second);
                maxHeap.pop();
            }
        }

        return ret;
    }
};
