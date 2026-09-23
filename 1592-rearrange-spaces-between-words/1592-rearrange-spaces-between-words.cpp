class Solution {
public:
    string reorderSpaces(string text) {
        int count_spaces = 0;
        int words = 0;

        for(int i = 0; i < text.size(); i++)
        {
            if(text[i] == ' ')
                count_spaces++;

            if((i == 0 && text[i] != ' ') ||
               (i != 0 && text[i] != ' ' && text[i-1] == ' '))
            {
                words++;
            }
        }

        int spaces_between = 0;
        int extra_spaces = 0;

        if(words > 1)
        {
            spaces_between = count_spaces / (words - 1);
            extra_spaces = count_spaces % (words - 1);
        }
        else
        {
            extra_spaces = count_spaces;
        }

        string ans = "";
        int current_word = 0;

        for(int i = 0; i < text.size(); i++)
        {
            if(text[i] != ' ')
            {
                ans += text[i];

                if(i + 1 == text.size() || text[i + 1] == ' ')
                {
                    current_word++;

                    if(current_word < words)
                    {
                        for(int j = 0; j < spaces_between; j++)
                            ans += ' ';
                    }
                }
            }
        }

        for(int i = 0; i < extra_spaces; i++)
            ans += ' ';

        return ans;
    }
};
