void rotate(int** matrix, int matrixRowSize, int *matrixColSizes) {
    //row 0 - n-1 ==> col n-1 - 0
    *matrixColSizes = matrixRowSize;
    
    for(int i = 0; i < matrixRowSize / 2; i++)
    {
        for(int j = i; j < matrixRowSize - 1 - i; j++)
        {
            int tmp = matrix[i][j];
            
            matrix[i][j] = matrix[matrixRowSize - 1 - j][i];
            matrix[matrixRowSize - 1 - j][i] = matrix[matrixRowSize - 1 - i][matrixRowSize - 1 - j];
            matrix[matrixRowSize - 1 - i][matrixRowSize - 1 - j] = matrix[j][matrixRowSize - 1 - i];
            matrix[j][matrixRowSize - 1 - i] = tmp;
        }
    }
}