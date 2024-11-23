#include <stdio.h>

int main() {
    int size;

    printf("Enter the array's size: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter array's elements:\n");
    for (int i = 0; i < size; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("Negative elements from the array: ");
    int foundNegative = 0;  
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            printf("%d", arr[i]);
            foundNegative = 1;
            
            if (i != size - 1 && arr[i + 1] < 0) {
                printf(", ");
            }
        }
    }
    if (!foundNegative) {
        printf("No negative elements in the array.");
    }

    return 0;
}

