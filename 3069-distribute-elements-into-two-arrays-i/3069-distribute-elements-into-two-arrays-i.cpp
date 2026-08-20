class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int check = nums.size()%2 == 0 ? 0: 1;
        int n = nums.size();
        vector<int> num1;
        vector<int> num2;
        num1.push_back(nums[0]);
        num2.push_back(nums[1]);
        for(int i = 2 ; i < n ;  i++)
        {
            if(num1.back() >= num2.back()) num1.push_back(nums[i]);
            else num2.push_back(nums[i]);
        }
        num1.insert(num1.end(),num2.begin(),num2.end());
        return num1;
        
    }
};