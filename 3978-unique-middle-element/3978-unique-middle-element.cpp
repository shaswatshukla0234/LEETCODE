class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int mid = (nums.size())/2;
        cout << mid ;
        for(int i = 0 ; i < nums.size() ; i++ )
        {
            if(i != mid && nums[i] == nums[mid])    return false;
        }
        return true;
    }
};