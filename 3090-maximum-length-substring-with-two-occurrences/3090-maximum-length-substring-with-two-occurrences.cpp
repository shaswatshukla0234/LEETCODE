class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char,int> mp;
        int maxi = 0;
        int i  = 0;
        int j = 0 ;
        while( j < s.size())
        {
            mp[s[j]]++;
            while(mp[s[j]]  > 2 )
            {
                maxi = max(maxi,j-i);
                mp[s[i]]--;
                i++;
            }
            maxi = max(maxi,j-i+1);
            j++;
        }
        return maxi;
    }
};