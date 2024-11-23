#include <stdio.h>

int main() {
    int rows, cols,i,j;

   
    printf("Enter the array's row & column size: ");
    scanf("%d", &rows);
    scanf("%d", &cols);

    int arr[rows][cols];  
    int transpose[cols][rows];  

   
    printf("Enter array's elements:\n");
    for (i = 0; i < rows; i++) {
        for ( j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

   
    for ( i = 0; i < rows; i++) {
        for ( j = 0; j < cols; j++) {
            transpose[j][i] = arr[i][j];
        }
    }

   
    printf("The transpose matrix of the array:\n");
    for ( i = 0; i < cols; i++) {
        for ( j = 0; j < rows; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}


