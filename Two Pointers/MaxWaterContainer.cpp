class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maks = 0;
        int right = heights.size()-1;
        int i = 0;
        while (i<right){
            int height = min(heights.at(i), heights.at(right));
            int width = right - i;
            int area = height*width;
            maks = max(maks, area);

            if (heights.at(i) < heights.at(right)) i++;
            else right--;
        }
        return maks;
    }
};
