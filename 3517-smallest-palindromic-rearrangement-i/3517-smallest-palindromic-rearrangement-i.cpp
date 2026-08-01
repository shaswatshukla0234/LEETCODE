class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int> freq(26,0);
        for(int i = 0 ; i < s.size() ; i++)
        {
            freq[s[i] -'a']++;
        }
        int middle = '\0';
        string left ;
        for(int i = 0 ; i <26;i++)
        {
            if(freq[i]%2 != 0) 
            {
                middle = char(i + 'a');
                freq[i]--;
            }
            if(freq[i] !=  0)
            {
                left += string(freq[i]/2 ,char( i + 'a'));
            }
        }
        string right  = left;
        if(s.size()%2 != 0 )
        {   
            left += middle;
        }
        reverse(right.begin(),right.end());
        left += right;
        return left;
    }
};