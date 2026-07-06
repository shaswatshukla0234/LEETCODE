class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxi = 0;
        for(int i =  0 ; i < sentences.size() ; i++)
        {
            int count = 1;
            int j = 1;
            while(j < sentences[i].size())
            {
                if(sentences[i][j-1] == ' ')   count++;
                j++;
            }
            maxi = max(maxi,count);
        }
        return maxi;
    }
};