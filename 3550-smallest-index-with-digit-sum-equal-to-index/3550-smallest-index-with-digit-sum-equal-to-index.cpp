class Solution {
public:
    int check(int num)
    {
        int sum = 0;
        while(num)
        {
            int rem = num%10;
            sum += rem;
            num/=10;
        }
        return sum;
    }
    int smallestIndex(vector<int>& nums) {
        for(int i = 0 ; i  < nums.size();i++)
        {
            if(check(nums[i]) == i) return i;
        }
        return -1;
    }
};