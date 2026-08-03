class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int sum=0,sum1=0;
        for(int i=0;i<aliceSizes.size();i++)
        {
            sum=sum+aliceSizes[i];
        }
        for(int i=0;i<bobSizes.size();i++)
        {
            sum1=sum1+bobSizes[i];
        }
        int diff=(sum1-sum)/2;
         sort(bobSizes.begin(),bobSizes.end());
        for(int i=0;i<aliceSizes.size();i++)
        {
            int target=aliceSizes[i]+diff;
           
            int low=0;
            int high=bobSizes.size()-1;
            while(low<=high)
            {
                int mid=low+(high-low)/2;
                if(bobSizes[mid]==target)
                return{aliceSizes[i],target};
                else
                if(bobSizes[mid]<target)
                low=mid+1;
                else
                high=mid-1;
            }
        }
       return{}; 
    }
};
/*
 alice + a - b;
 boob - a + b;
 alice + a - b  = bob -a + b;
 a - b =  bob - alice/2;
*/