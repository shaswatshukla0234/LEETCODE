class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        if (nums.empty())
            return ans;
        int i = 0;
        int j = 0;
        while (j < nums.size()) {
            if (j + 1 < nums.size() && nums[j + 1] == nums[j] + 1) {
                j++;
            } 
            else {
                if (i == j) {
                    ans.push_back(to_string(nums[i]));
                } 
                else {
                    ans.push_back(to_string(nums[i]) + "->" + to_string(nums[j]));
                }
                j++;
                i = j;
            }
        }
        return ans;
    }
};