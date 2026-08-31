/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> ans;
        if(!(head->next) || !(head->next->next)) return {-1,-1};
        int prev = head->val ;
        int node = 2;
        head = head->next;
        while(head->next != NULL)
        {
            if(head->val > prev && head->val > head->next->val) ans.push_back(node);
            else if(head->val < prev && head->val <  head->next->val)   ans.push_back(node);
            prev = head->val;
            head = head->next;
            node++;
        }
        for(int i = 0  ; i < ans.size() ; i++)
        {
            cout << ans[i] <<   " ";
        }
        if(ans.size() <= 1 )    return {-1,-1};
        sort(ans.begin(),ans.end());
        int mini = INT_MAX;
        for (int i = 1; i < ans.size(); i++)
        {
            mini = min(mini, ans[i] - ans[i - 1]);
        }
        int n = ans.size();
        return {mini, ans[n-1] - ans[0]};
    }
};