class Solution {
public:
    int findMin(vector<int> &nums) {
        int left = 0;
        int right = nums.size()-1;
        int ret = nums.at(0);

        while (right>=left){
            if (nums.at(left)<nums.at(right)){
                return min(ret, nums.at(left));
            }

            int mid = left + (right - left) / 2;
            ret = min(ret, nums.at(mid));

            if (nums.at(mid) >= nums.at(left)) {
                left = mid + 1; 
            }
            else {
                right = mid - 1;
            }
        }

        return ret;
    }
};
