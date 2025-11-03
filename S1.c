#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter the value of string:  ");
    gets(str);

    printf("The length of string is= %lu",strlen(str));
    return 0;

}

