class Solution {
public:
    int update(int &count, TreeNode *root, int &sum)
    {
        if(root == NULL)
        {
            sum = 0;
            return 0;
        }
        int leftSum = 0;
        int rightSum = 0;
        int left = update(count, root->left, leftSum);
        int right = update(count, root->right, rightSum);
        sum = leftSum + rightSum + root->val;
        if(sum / (left + right + 1) == root->val)
        {
            count++;
        }
        return left + right + 1;
    }
    int averageOfSubtree(TreeNode* root)
    {
        int count = 0;
        int sum = 0;
        update(count, root, sum);
        return count;
    }
};