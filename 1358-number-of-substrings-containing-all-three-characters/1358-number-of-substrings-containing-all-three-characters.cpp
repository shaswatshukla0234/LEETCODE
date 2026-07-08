class Solution {
    /* 
        lets make the uniquee logic ---> 
        abcabc 
        take 3 variable a = -1  , b=  -1, c = -1;
        abcabc
        0 
    we traverse line vise and store the indeces ;
    
    */
public:
    int numberOfSubstrings(string s) {
        vector<int> posi(3,-1);
        int total =  0;
        for(int  i = 0 ; i < s.size() ; i++)
        {
            posi[s[i] - 'a'] = i;
            total  += min(posi[0],min(posi[1],posi[2])) + 1;
        }
        return total;
    }
};