class Solution {
public:
    string removeStars(string s) {
        string ans;
        int n=s.size();
        for(auto &ch : s){
            if(ch=='*'){
                ans.pop_back();
            }
            else{
                ans.push_back(ch);
            }
        }
        return ans;
    }
};