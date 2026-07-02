class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> ans(n);
        stack<int> temp;
        for(int i = 0 ; i < n ; i++)
        {
            int topi;
            if(!temp.empty())
                    topi = temp.top();   
            while(!temp.empty() && temperatures[topi]  < temperatures[i])
            { 
                ans[topi] = i  - topi; 
                temp.pop();
                if(!temp.empty())
                    topi = temp.top();
            }
            temp.push(i);
        }
        while(!temp.empty())
        {
            int topi = temp.top();
            ans[topi] = 0; 
            temp.pop();
        }
        return ans;
    }
};