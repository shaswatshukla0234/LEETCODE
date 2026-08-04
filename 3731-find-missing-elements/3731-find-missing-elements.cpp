class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int x = nums[0];
        int i =  0;
        while(i < n)
        {
            if(x != nums[i])
            {
                ans.push_back(x);
                x++;
            }
            else 
            {
                i++;
                x++;
            }

        }
        return ans;
        

    }
};