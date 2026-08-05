class Solution {
public:
    int longestPalindrome(string s) {
        int count[128]={0};
        for(char c:s) count[c]++;
        int length=0;
        for(int freq:count){
            length+=(freq/2)*2;
        }
        if(length<s.size()) length+=1;
        return length;
    }
};