/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *columnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** levelOrder(struct TreeNode* root, int** columnSizes, int* returnSize) {
    if(root == NULL)
        return NULL;
    
    struct TreeNode** tmp = (struct TreeNode**)malloc(1000 * sizeof(struct TreeNode*));//缓存队列，层宽最大为1000
    int head = 0, tail = 1;
    tmp[head] = root;
    
    int depth = 0;//树深
    int count = 1;//层宽
    int** result =  (int**)malloc(5000 * sizeof(int*));//最大树深5000
    (*columnSizes) = (int*)malloc(5000 * sizeof(int));
    
    while(count)
    {
        int levelDepth = count;//本层宽度
        count = 0;
        result[depth] = (int*)malloc(levelDepth * sizeof(int));
        (*columnSizes)[depth] = levelDepth;
        
        for(int i = 0; i < levelDepth; i++)
        {
            if(tmp[head]->left != NULL)//左子树入队
            {
                tmp[tail] =  tmp[head]->left;
                tail = (tail + 1) % 1000;
                count++;
            }
            
            if(tmp[head]->right != NULL)//右子树入队
            {
                tmp[tail] =  tmp[head]->right;
                tail = (tail + 1) % 1000;
                count++;
            }
            
            //出队
            result[depth][i] = tmp[head]->val;
            printf("%d\n",tmp[head]->val);
            head = (head + 1) % 1000;
        } 
        
        depth++;
    }
    
    *returnSize = depth;
    return result;
}