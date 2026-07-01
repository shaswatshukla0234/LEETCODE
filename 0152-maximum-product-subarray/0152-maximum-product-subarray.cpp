class Solution {
public:
/* 

    // 2 -2 1 
    // 2 -4 -4 



    // 1 -2 3 -4        1 -2 -6 24


    // 1 -2 -6 24
    // 1 -2 -3 -4       1 -2 6 -24
    // 1 -2 -3 12

    // 1 -2 -3 2 -4     1 -2 6 12 -48
    //  1 -2 6 12 -4fc

    // 2 3 -2 4;
    //min= 2 , 6 , -12 , -48
    // max = 2 , 2 ,  2 , 4
*/

    int maxProduct(vector<int>& nums) {
        int maxi =  nums[0];
        int max_pro = nums[0];
        int min_pro = nums[0];
        for(int i = 1 ; i < nums.size() ; i++)
        {

            if(nums[i] < 0) swap(max_pro,min_pro);
            max_pro = max(nums[i],max_pro*nums[i]);
            min_pro = min(nums[i],min_pro*nums[i]);
            maxi = max(max_pro , maxi);

        }
        return maxi;
    }
};