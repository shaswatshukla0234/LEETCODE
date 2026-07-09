class Solution {
    bool update(int mid ,vector<int>& piles, int h )
    {
        long long int  total = 0;
        for(int i = 0 ;  i < piles.size();i++)
        {
            if(piles[i]%mid)  total += piles[i]/mid + 1;
            else 
                total += piles[i]/mid;
        }
        return total <= h;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1 ;
        int high = INT_MIN;
        for(int i  = 0 ; i < piles.size();i++)
        {
            high = max(piles[i],high);
        }
        int prev = -1;
        while(low <= high)
        {
            int mid = low + (high - low)/2;
            if(update(mid,piles,h))
            {
                high = mid -1;
                prev = mid;
                cout << prev << " ";
            }else 
            {   
                low = mid +1;
            }
        }
        return prev;
    }
};