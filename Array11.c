#include <stdio.h>
int main() {
    int a[10], b[10]={0}, n, i, dir;
    printf("Enter 10 elements:\n");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    printf("Enter number of positions to shift: ");
    scanf("%d",&n);
    printf("Enter direction (1=Left, 2=Right): ");
    scanf("%d",&dir);

    if(dir==1){
        for(i=0;i<10-n;i++)
            b[i]=a[i+n];
    } else {
        for(i=n;i<10;i++)
            b[i]=a[i-n];
    }

    printf("Shifted array:\n");
    for(i=0;i<10;i++)
        printf("%d ",b[i]);
    return 0;
}

