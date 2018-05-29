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
void inOrder(int* count, int* buff, struct TreeNode* root)
{
    if(root)
    {
        if(root->left)
            inOrder(count, buff, root->left);
    
        buff[*count] = root->val;
        (*count)++;
        
        if(root->right)
            inOrder(count, buff, root->right);
    }
}

int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    if(root == NULL)
    {
        *returnSize = 0;
        return NULL;
    }
    
    int count = 0;
    int* result = (int*)malloc(sizeof(int) * 5000);
    inOrder(&count, result, root);
    
    *returnSize = count;
    return result;
}