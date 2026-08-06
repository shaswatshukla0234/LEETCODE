class Solution {
public:
    int smallestNumber(int n, int t) {
        while(true)
        {
            int num = n;
            int sum = 1 ;
            while(num)
            {
                int rem = num%10;
                sum = sum * rem;
                num/=10;
            }
            if(sum %t == 0) return n;
            n++;
        }
        return n;
    }
};