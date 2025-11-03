#include <stdio.h>

int main() {
    int a[3][3], b[3][3], sum[3][3], diff[3][3], prod[3][3];
    int i, j, k;

    printf("Enter elements of first 3x3 matrix:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", (*(a + i) + j));
    printf("Enter elements of second 3x3 matrix:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", (*(b + i) + j));


    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++) {
            *(*(sum + i) + j) = *(*(a + i) + j) + *(*(b + i) + j);
            *(*(diff + i) + j) = *(*(a + i) + j) - *(*(b + i) + j);
        }


    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++) {
            *(*(prod + i) + j) = 0;
            for (k = 0; k < 3; k++)
                *(*(prod + i) + j) += *(*(a + i) + k) * *(*(b + k) + j);
        }

    printf("\nSum of matrices:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
            printf("%d ", *(*(sum + i) + j));
        printf("\n");
    }

    printf("\nDifference of matrices:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
            printf("%d ", *(*(diff + i) + j));
        printf("\n");
    }

    printf("\nProduct of matrices:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
            printf("%d ", *(*(prod + i) + j));
        printf("\n");
    }

    return 0;
}

