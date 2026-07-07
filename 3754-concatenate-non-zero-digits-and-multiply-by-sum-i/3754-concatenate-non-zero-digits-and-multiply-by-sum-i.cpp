class Solution {
public:
    long long sumAndMultiply(int n) {
        long long int sum = 0 ;
        long long int num = 0;
        string s = to_string(n);
        reverse(s.begin(),s.end());
        n  = stoi(s);
        while(n)
        {
            int rem = n%10;
            n = n/10;
            if(rem == 0)    continue;
            num = num*10 + rem;
            sum += rem;
            
        }
        return sum*num;
    }
};