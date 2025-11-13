#include<stdio.h>
int main()
{
int a[10],i;
printf("Enter 10 values: \n");
for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    printf("4th=%d,7th=%d,9th=%d",a[3],a[6],a[8]);
return 0;
}

