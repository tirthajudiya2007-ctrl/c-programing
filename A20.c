#include<stdio.h>
int main()
{
    int i,sum=0;
    printf("The integer between 1 to 100 is divisible by 3 is: \n");
    for(i=1;i<=100;i++)
    {
        if(i % 3 == 0)
        {
            printf("%d\n",i);
            sum=sum + i;
        }
    }
    printf("Sum of numbers divisible by 3 : %d",sum);
    return 0;
}
