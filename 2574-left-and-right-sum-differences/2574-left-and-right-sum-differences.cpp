class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix(n,0);
        int curr = 0;
        for(int i = 0 ; i < nums.size()-1; i++)
        {
            prefix[i+1]=  prefix[i] + nums[i] ;
        }        
        for(int j = nums.size() -1; j >= 0 ; j--)
        {
            prefix[j] = abs(prefix[j] - curr);
            curr += nums[j];
        }
        return prefix;
    }
};