/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
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

bool isValidBST(struct TreeNode* root) {

    if(root == NULL)
        return true;
    
    int count = 0;
    int* buff = (int*)malloc(10000 * sizeof(int));
    inOrder(&count, buff, root);
    
    for(int i = 0; i < count - 1; i++)
    {
        if(buff[i] >= buff[i + 1])
        {
            free(buff);
            return false;
        }
    }
    
    free(buff);
    return true;
}
