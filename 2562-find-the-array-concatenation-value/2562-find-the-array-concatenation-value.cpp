class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long int sum  = 0 ;
        int i = 0 ;
        int j = nums.size()-1;
        if(nums.size() %2 != 0)
        {
            int mid = i + (j-i)/2;
            sum = nums[mid];
        }
        while(i < j)
        {
            string result = to_string(nums[i]) + to_string(nums[j]);
            sum += stoi(result);
            i++;
            j--;
        }
        return sum;
    }
};