bool isValidSudoku(char** board, int boardRowSize, int boardColSize) {
    int key[9][27] = {0};
    int keyCount[9] = {0};
    
    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            if(board[i][j] != '.')
            {
                int index = board[i][j] - '1';
                int block = i / 3 + 3 * (j / 3);
                
                int k = 0;
                for(k = 0; k < keyCount[index]; k++)
                {
                    if(key[index][3 * k] == i || key[index][3 * k + 1] == j || key[index][3 * k + 2] == block)
                        return false;
                }
                key[index][3 * k] = i;
                key[index][3 * k + 1] = j;
                key[index][3 * k + 2] = block;
                keyCount[board[i][j] - '1']++;
            }
        }
    }
    
    return true;
}