class Solution {
public:
    string sortString(string s) {
        vector<int> freq(26,0);
        for(int i = 0 ; i  < s.size();i++)
        {
            freq[s[i] - 'a']++;
        } 
        string ans;
        int j =  0 ;
        int flag = 0;
        while(j < s.size())
        {
            int i = flag == 0 ? 0 : 25;
            while(i >= 0 && i < 26 )
            {
                // a = 4, b = 4 , c= 4;
                if(freq[i] != 0)    
                {
                    ans += 'a' + i;
                    j++;
                    freq[i]--;
                }
                flag == 0 ? i++ : i--;
            }
            flag = !flag;
        }
        return ans;
    }
};