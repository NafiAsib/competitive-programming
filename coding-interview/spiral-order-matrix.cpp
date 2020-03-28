

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* spiralOrder(int** matrix, int matrixSize, int* matrixColSize, int* returnSize){
    int bottom = matrixSize; //m
    int right = *matrixColSize; //n
    

    if(bottom == 0) {
        *returnSize = 0;
        int* ans = (int*)malloc(10*sizeof(int));
        return ans;
    }
    else if(right == 1) {
        *returnSize = bottom;
        int* ans = (int*)malloc(bottom*sizeof(int));
        for(int i=0; i<bottom; i++) ans[i] = matrix[i][0];
        return ans;
    }
    
    else {
        *returnSize = bottom*right;
        int* ans = (int*)malloc((bottom*right)*sizeof(int));
        
        bottom -= 1;
        right -= 1;
        int indx = 0;
        int i = 0, j = 0;
        int top = 0, left = 0;
        
        
        int dir = 1;
        
        while(top<=bottom && left <= right) {
            
            if(dir == 1) {
                i = top;
                for(j = left; j<=right; j++) ans[indx++] = matrix[i][j];
                top++;
                dir = 2;
            }
            else if(dir == 2) {
                j = right;
                for(i=top;i<=bottom; i++) ans[indx++] = matrix[i][j];
                dir = 3;
                right--;
            }
            else if(dir == 3) {
                i = bottom;
                for(j = right; j>=left; j--) ans[indx++] = matrix[i][j];
                bottom--;
                dir = 4;
            }
            else if(dir == 4) {
                j = left;
                for(i=bottom; i>=top; i--) ans[indx++] = matrix[i][j];
                left++;
                dir = 1;
            }
        }
        
        
        return ans;
    }
}

