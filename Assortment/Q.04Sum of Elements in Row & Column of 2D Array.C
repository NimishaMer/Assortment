#include <stdio.h>

int main() {
    int rows, cols,i,j;

   
    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    printf("Enter the array's column size: ");
    scanf("%d", &cols);

    int arr[rows][cols];  

   
    printf("Enter array's elements:\n");
    for ( i = 0; i < rows; i++) {
        for ( j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

   
    int rowIndex;
    printf("Enter row number: ");
    scanf("%d", &rowIndex);

   
    if (rowIndex < 0 || rowIndex >= rows) {
        printf("Invalid row number!\n");
        return 1;
    }

   
    int rowSum = 0;
    printf("Elements of row %d: ", rowIndex);
    for ( j = 0; j < cols; j++) {
        printf("%d ", arr[rowIndex][j]);
        rowSum += arr[rowIndex][j];
    }
    printf("\nThe sum of row %d: %d\n", rowIndex, rowSum);

   
    int colIndex;
    printf("Enter column number: ");
    scanf("%d", &colIndex);

   
    if (colIndex < 0 || colIndex >= cols) {
        printf("Invalid column number!\n");
        return 1;
    }

   
    int colSum = 0;
    printf("Elements of column %d: ", colIndex);
    for ( i = 0; i < rows; i++) {
        printf("%d ", arr[i][colIndex]);
        colSum += arr[i][colIndex];
    }
    printf("\nThe sum of column %d: %d\n", colIndex, colSum);

    return 0;
}

