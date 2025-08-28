#include<stdio.h>
int main()
{
    int a;
    printf("Enter the value:");
    scanf("%d",&a);

    if(a%7 == 0)
        printf("%d is divisible by 7",a);
    else
        printf("%d is not divisible by 7",a);

    return 0;
}
