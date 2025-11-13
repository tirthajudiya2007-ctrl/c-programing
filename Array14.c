#include <stdio.h>
int main() {
    int a[10], n, num, i;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter number to insert: ");
    scanf("%d",&num);

    a[n]=num;
    n++;

    printf("Array after insertion:\n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}

