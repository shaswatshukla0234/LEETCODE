class Solution {
public:
    int maxVowels(string s, int k) {
        int count =  0 ;
        int i  =  0 ;
        int MAX = 0;
        int j = 0 ;
        while(j < k)
        {
            if (s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u')
            {
                count++;
            }
            j++;
        }
        MAX = max(MAX,count);
        while(j < s.size())
        {
            if (s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u')
            {
                count++;
            }
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {
                count--;
            }
            MAX = max(MAX,count);
            j++;
            i++;
        }
        return MAX;
    }
};