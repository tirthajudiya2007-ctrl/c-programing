#include<stdio.h>
int main()
{
    int A,H,L;
    printf("Enter the height of triangle: ");
    scanf("%d",&H);
    printf("Enter the length of triangle: ");
    scanf("%d",&L);

    A=H*L/2;
    printf("The area of triangle is %d",A);
    return 0;
}
