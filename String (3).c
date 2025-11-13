#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter the string:  ");
    gets(str);

    printf("Upercase string : %s",strupr(str));

    return 0;
}
