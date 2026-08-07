class Solution {
    private :
    bool safe(vector<vector<int>> arr, int n , int col , int row)
    {
        // for col 
        for(int i = 0 ; i < n ; i++)
            if(arr[i][col] == 1)    return false;
        // for upper left diagonal ;
        for(int i = row , j = col ; i >= 0 && j >= 0 ; i--,j--)
            if(arr[i][j] == 1)  return false;
        // for upper right diagonal
        for(int i = row , j = col ; i >= 0 && j < n ; j++ , i--)
            if(arr[i][j] == 1)  return false;
        return true;
    }
    void check(vector<vector<int>> &arr , int n , int row , int &count)
    {
        if(row == n)
            count++;
        for(int i = 0 ; i < n ; i++)
        {
            if(safe(arr,n,i,row))
            {
                arr[row][i] = 1;
                check(arr,n,row+1,count);
                arr[row][i] = 0;
            }
        }
    }
public:
    int totalNQueens(int n) {
        int count = 0;
        vector<vector<int>> arr(n, vector<int>(n, 0));
        check(arr,n,0,count);
        return count;
    }
};