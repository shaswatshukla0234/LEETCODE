class Solution {
public:
    int subtractProductAndSum(int n) {
        long long int sum = 0 ;
        long long int mul = 1;
        while(n)
        {
            int rem = n%10 ;
            sum += rem;
            mul *= rem;
            n /= 10;
        }
        return mul - sum;
    }
};