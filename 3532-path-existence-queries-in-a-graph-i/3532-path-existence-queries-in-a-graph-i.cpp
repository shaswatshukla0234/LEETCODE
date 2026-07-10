class Solution {
public:
    vector<bool> pathExistenceQueries(int n, vector<int>& nums, int maxDiff,
    vector<vector<int>>& queries) {
        vector<int> temp(n, 0);
        int temp1 = 0;
        for (int i = 1; i < n; ++i) {
            if (nums[i] - nums[i - 1] > maxDiff) {
                temp1++;
            }
            temp[i] = temp1;
        }

        vector<bool> ans;
        for (auto& q : queries) {
            ans.push_back(temp[q[0]] == temp[q[1]]);
        }
        return ans;
    }
};