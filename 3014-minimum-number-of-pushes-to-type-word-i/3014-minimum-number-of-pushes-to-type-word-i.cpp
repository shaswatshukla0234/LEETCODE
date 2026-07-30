class Solution {
    /*
         1 =1
         2 = 2 ;
         8 = 8 ;
        9 = 10 
        10 = 12 
        11 = 14 

         8 - 16 = 8+16 = 24;
         16 - 24 = 24 + 24 = 48;


    */
public:
    int minimumPushes(string word) {
        int n = word.size();
        int x = 1;
        int ans = 0;
        while(n)
        {
            if( n <= 8) return ans+= n*x;
            else 
            {
                ans += 8*x;
                x++;
                n -=8;
            }
        }   
        return ans;
    }
};