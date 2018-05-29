/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isSymmetric0(struct TreeNode* tree1, struct TreeNode* tree2)
{
    if(tree1 == NULL && tree2 == NULL)
        return true;
    
    if(tree1 != NULL && tree2 != NULL 
       && tree1->val == tree2->val 
       && isSymmetric0(tree1->left, tree2->right)
       && isSymmetric0(tree1->right, tree2->left))
        return true;
    
    return false;
}

bool isSymmetric(struct TreeNode* root) {
    if(root == NULL)
        return true;
    
    if(isSymmetric0(root->left, root->right))
        return true;
    
    return false;
}