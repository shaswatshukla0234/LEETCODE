class Solution {
    /*
        1 2  3
    1right 2left 
    3up 4up
    */
    
public:
    vector<vector<int>> generateMatrix(int n) {
        int left =  0;
        int right = n -1;
        int bottom = n-1;
        int up = 0;
        int x= 1;
        vector<vector<int>> ans(n,vector<int>(n,0));
        while(left <= right && up <= bottom)
        {
            for(int i = left  ; i <= right ; i++)
            {
                ans[left][i] = x++;
            }
            up++;
            for(int i = up ; i <= bottom;i++)
            {
                ans[i][right] = x++;
            }
            right--;
            for(int i = right ; i >= left ; i--)
            {
                ans[bottom][i]  = x++;
            }
            bottom--;
            for(int i = bottom ; i >= up ; i--)
            {
                ans[i][left]  = x++;
            }
            left++;
            cout << left << " " << right << " " << up << " " << bottom;
        }
        return ans;
    }
};
