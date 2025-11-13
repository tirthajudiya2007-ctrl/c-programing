#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter the first n natural numbers: \n");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        sum += i;
    }
printf("Sum of first %d natural numbers =%d\n",n,sum);

return 0;
}
