class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int count1 = 1;
        int sum = 0 ;
        int prev = 0 ;
        for(int i = 0 ; i < s.size();  i++)
        {
            sum += widths[s[i] - 'a'];
            if(sum > 100)
            {
                sum = widths[s[i] - 'a']; 
                prev = i;
                count1++;
            }
        }
        if(prev == 0 )  return {count1,sum} ;
        else sum = 0;
        for(int i  = prev ; i < s.size() ;i++)
        {
            sum += widths[s[i] - 'a']; 
        }
        return {count1,sum};
    }
};