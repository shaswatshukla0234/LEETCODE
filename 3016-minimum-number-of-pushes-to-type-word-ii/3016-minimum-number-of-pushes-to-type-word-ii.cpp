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
        int ans = 0;
        vector<int> freq(26,0);
        for(int i = 0 ; i < word.size() ;i++)
        {
            freq[word[i] - 'a']++;
        }
        sort(freq.begin(),freq.end(),greater<int>());
        for(int i = 0 ; i < 26 ; i++)
        {
            ans += freq[i]*(i/8+1);

        }
        return ans;
    }
};