#include<stdio.h>
int main()
{
    int a[5],i,j,temp;
    printf("Enter the 5 values: \n");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Sorted in ascending order:\n");
    for(i=0;i<5;i++)
        printf("%d",a[i]);
    return 0;
}
