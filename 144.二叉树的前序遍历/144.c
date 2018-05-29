/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */

void preOrder(int* count, int* buff, struct TreeNode* root)
{
    buff[*count] = root->val;
    (*count)++;
        
    if(root->left)
        preOrder(count, buff, root->left);
        
    if(root->right)
        preOrder(count, buff, root->right);
}

int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    if(root == NULL)
        return NULL;
    
    int* result = (int*)malloc(10000 * sizeof(int));
    int count = 0;
    preOrder(&count, result, root);
    
    *returnSize = count;
    return result;
}