#include<stdio.h>
int main()
{
    int i,boys=0,girls=0;
    char sex;

    printf("Enter sex code for 50 students(M=boys and F=girls):\n");

    for(i=1;i<=50;i++)
    {
        printf("Student %d: ",i);
    scanf("  %c",&sex);

    if(sex == 'M')
    {
        boys++;
    }
    else if(sex == 'F')
    {
        girls++;
    }
    else
    {
       printf("Invalid sex code please enter valid code as M or F.");
       i--;
    }
}
    printf("\n Total boys = %d\n",boys);
    printf("Total girls = %d",girls);

    return 0;
}
