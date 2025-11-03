#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[100];
      int a=0, e=0, i_c=0, o=0, u=0;
    printf("Enter the string: ");
    gets(str);

    for(int j=0;j<strlen(str);j++){
    char ch = tolower(str[j]);
    if (ch == 'a') a++;
    else if(ch == 'e')e++;
    else if(ch == 'i')i_c++;
    else if(ch == 'o')o++;
    else if(ch == 'u')e++;
    }
    printf("Vowel frequencies:\n");
    printf("A/a: %d\nE/e: %d\nI/i: %d\nO/o: %d\nU/u: %d\n", a, e, i_c, o, u);
    return 0;


}
