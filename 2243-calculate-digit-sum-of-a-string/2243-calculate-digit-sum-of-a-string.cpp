class Solution {
public:
    string digitSum(string s, int k) {
        while(s.size() > k)
        {
            int sum = 0 ;
            string str = "";
            int temp = k;
            for(int i = 0 ; i < s.size() ;i++)
            {
                sum += s[i] - '0';
                temp--;
                if(temp == 0 || i == s.size() - 1 )
                {
                    temp = k;
                    str += to_string(sum);
                    sum = 0;
                }
            }
            s = str;
        }
        return s;

    }
};