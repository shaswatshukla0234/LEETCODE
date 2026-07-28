/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* spiralOrder(int** matrix, int matrixSize, int* matrixColSize, int* returnSize) {
    int left = 0 , right = (*matrixColSize)-1;
    int a=0;
    int top = 0 , bottom = matrixSize -1;
    *returnSize = (right+1)*(bottom+1);
   int *arr = (int *)malloc(sizeof(int)*(*returnSize));
    while(top <= bottom && left <= right)
    {
    if(top == bottom || left == right)  break;
    for(int i = left ; i <= right ; i++ )
    {
        arr[a]= matrix[top][i];
        a++;
    }
    top++;
    for(int i = top ; i <= bottom ; i++)
    {
        arr[a] = matrix[i][right];
        a++;
    }
    right--;
    for(int i = right  ; i >=left ; i--)
    {
        arr[a] = matrix[bottom][i];
        a++;
    }
    bottom--;
    for(int i = bottom  ; i >=top ; i-- )
    {
        arr[a]= matrix[i][left];
        a++;
    }
    left++;
    }
    if(left == right && top != bottom )
    {
        for(int i = top ; i <= bottom; i++)
        {
            arr[a] = matrix[i][right];
            a++;
        }
    }
    else if(left != right && top == bottom )
    {
        for(int i = left ; i <= right; i++)
        {
            arr[a] = matrix[top][i];
            a++;
        }
    }
    else 
    {
        if((*matrixColSize) == matrixSize ) 
        {
            if(matrixSize%2 != 0)
                arr[a]= matrix[top][left];
        }
        
    }
    return arr;
    
}