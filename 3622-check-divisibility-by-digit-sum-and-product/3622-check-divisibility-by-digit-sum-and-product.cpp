class Solution {
public:
    bool checkDivisibility(int n) {
        if(n == 0 ) return false;
        int sum = 0 ; 
        long long int  mul = 1;
        int num = n;
        while(n>0)
        {
            int rem = n%10;
            sum += rem;
            mul = mul*rem;
            n = n/10;
        }
        return num%(sum+mul) == 0 ? true : false;
    }
};