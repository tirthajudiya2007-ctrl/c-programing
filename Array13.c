#include <stdio.h>
int main() {
    int a[10], n, pos, num, i;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter position and number: ");
    scanf("%d%d",&pos,&num);

    for(i=n;i>=pos;i--)
        a[i]=a[i-1];
    a[pos-1]=num;
    n++;

    printf("Array after insertion:\n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}

