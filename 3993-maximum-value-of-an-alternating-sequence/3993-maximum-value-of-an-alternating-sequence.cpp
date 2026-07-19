class Solution {
public:
// 3 + 3 * 5 = 
    long long maximumValue(int n, int s, int m) {
        if (n==1)return s;

        long long int N = n;
        long long int S = s;
        long long int M = m;
        if(n%2 == 0)   
            return S + (N/2)*M-((N-1)/2);
        else 
            return S + (N/2)*M-((N/2)-1);
    }
};