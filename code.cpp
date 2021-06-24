/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int height(TreeNode *root)
    {
        if(root==NULL)return -1;
        return max(height(root->left),height(root->right))+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL)return 0;
        int left=diameterOfBinaryTree(root->left);
         int right=diameterOfBinaryTree(root->right);
        int heightleft=height(root->left)+1;
        int heightright=height(root->right)+1;
        int dia=heightleft+heightright;
        return max(dia,max(left,right));

        
    }
};
