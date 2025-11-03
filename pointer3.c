#include <stdio.h>

int main() {
    int mat[3][3];
    int i, j;
    int *ptr = &mat[0][0];
    int max, min;

    printf("Enter elements of 3x3 matrix:\n");
    for (i = 0; i < 9; i++)
        scanf("%d", ptr + i);

    max = min = *ptr;

    for (i = 1; i < 9; i++) {
        if (*(ptr + i) > max)
            max = *(ptr + i);
        if (*(ptr + i) < min)
            min = *(ptr + i);
    }

    printf("\nLargest element = %d", max);
    printf("\nSmallest element = %d", min);

    return 0;
}
