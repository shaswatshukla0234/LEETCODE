class Solution {
public:
bool compare(string s  , string ans , int i , int j)
{
    if(ans.size() == 0) return true;
    if (ans == s.substr(i,j-i+1) )   return false;
    int k =  0;
    while(i <= j)
    {
        if(s[i] == ans[k]) i++;
        else if(ans[k] != s[i] && ans[k] > s[i] )   return true;
        else    
             return false;
        k++;
    }
    return false;
}
    string shortestBeautifulSubstring(string s, int k) {
        int len = INT_MAX ;
        string ans = "";
        int count =  0 ;
        int i =  0 ; 
        int j = 0 ;
        while(j <  s.size())
        {
            if(s[j] == '1')   count++;    
            while(count >= k)
            {
                if(count == k &&  len  > j-i+1)
                {
                    ans = s.substr(i,j-i+1);
                    len  = j-i +1;
                }
                else if(count == k && len == j-i+1 && compare(s,ans,i,j))
                {
                    ans = s.substr(i,j-i+1);
                    len  = j-i +1;
                }
                if(s[i++] == '1') count --;
            }
            j++;
        }
        return ans;
    }
};