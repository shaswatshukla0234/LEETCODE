class Solution {
    /* 
        3   2   2   4   1   4  === 16 min -  4 
    */
    bool update(int mid,vector<int>& weights, int days)
    {
        int i = 0 ;
        int sum = 0 ;
        for(i  = 0 ; i < weights.size() && days != 0; i++)
        {
            sum += weights[i];
            if(sum > mid) {
                sum  = weights[i];
                days--;
                continue;
            }
        }
        if(days > 0 && i == weights.size() )  return true;  
        return false;   
    }
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low = INT_MIN;
        int high = 0;
        for(int i = 0 ;  i < weights.size() ;i++)
        {
            low = max(weights[i],low);
            high += weights[i];
        }
        int mid ;
        int prev = 0;
        while(low <= high )
        {
            mid = low + (high-low)/2;
            if(update(mid,weights,days))
            {
                prev = mid;
                high = mid -1;
            }
            else low = mid +1;
        }
        return prev;
    }
};