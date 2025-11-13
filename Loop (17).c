#include<stdio.h>
int main()
{
    int i,arr[200];
    int p,n,zero;

    printf("Enter the 200 values: ");
    for(i=0;i<200;i++)
    {
        scanf("%f",&arr[i]);
    }
    p=n=zero=arr[0];
    for(i=1;i<=200;i++)
    {
        if(arr[i]>0)
        {
            p++;
        }
        if(arr[i]<0)
        {
            n++;
        }
        else(arr[i]=0);
        {
            zero++;
        }
    }
    printf("Positive values=%d \n",p);
    printf("Negative values=%d \n",n);
    printf("Zero values=%d\n",zero);
    return 0;
}
