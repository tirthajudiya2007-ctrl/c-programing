#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[100];
    int i;
    printf("Enter the string: ");
    gets(str);
    for(i=0;str[i]!='\0';i++){
    if(isupper(str[i]))
        str[i]=tolower(str[i]);
    else if(islower(str[i]))
        str[i]=toupper(str[i]);
     }
    printf("The toggle value of string : %s",str);
return 0;
}
