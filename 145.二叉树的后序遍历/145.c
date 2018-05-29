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

void postOrder(int* count, int* buff, struct TreeNode* root)
{
    if(root->left)
        postOrder(count, buff, root->left);
    
    if(root->right)
        postOrder(count, buff, root->right);
    
    buff[*count] = root->val;
    (*count)++;
}
int* postorderTraversal(struct TreeNode* root, int* returnSize) {
    if(root == NULL)
        return NULL;
    
    int* result = (int*)malloc(10000 * sizeof(int));
    int count = 0;
    
    postOrder(&count, result, root);
    *returnSize = count;
    return result;
}