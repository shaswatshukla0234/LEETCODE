class Solution {
public:
    int maxProduct(int n) {
       int min1 = 0;
       int min2 = 0;
       while(n)
       {
            int rem = n%10;
            if(rem > min1)
            {
                min2 = min1;
                min1 = rem;
            }
            else if (rem > min2)
            {
                min2= rem;
            }
            n /=10;
       }
       return min1 * min2;
    }
};