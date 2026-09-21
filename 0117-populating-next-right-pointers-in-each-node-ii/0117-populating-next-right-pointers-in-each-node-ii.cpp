/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        queue<Node*> q;
        if(root == NULL) return root;
        q.push(root);
        while(!q.empty())
        {
            int current_size = q.size();
            for(int i = 0 ; i < current_size-1; i++ )
            {
                Node * temp = q.front();
                q.pop();
                Node *temp2 = q.front();
                temp->next = temp2;
                if(temp->left ) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            Node * x = q.front();
            q.pop();
            x->next = NULL; 
            if(x->left) q.push(x->left);
            if(x->right) q.push(x->right);
        }
        return root;
    }
};