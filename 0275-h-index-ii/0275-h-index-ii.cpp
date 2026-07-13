class Solution {
public:
//  0 1 20 30 40
    int hIndex(vector<int>& citations) {
        int low = 0;
        int high = citations.size() - 1;
        int prev = 0;
        int n = citations.size();
        while(low <= high)
        {
            int mid  = low + (high - low)/2;
            if(citations[mid] >= n - mid  )
            {
                prev = n - mid;
                high = mid -1;
            }
            else 
                low = mid +1;
        }
        return prev;
    }
};