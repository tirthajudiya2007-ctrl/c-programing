#include<stdio.h>
int main()
{
    int i;
    printf("The integer between 1 to 100 is divisible by 5 is: \n");
    for(i=1;i<=100;i++)
    {
        if(i % 5 == 0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
