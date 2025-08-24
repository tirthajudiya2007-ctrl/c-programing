#include<stdio.h>
int main()
{
 int num1,num2,sum,sub,mul,div;
 printf("the value of num1: ");
 scanf("%d",&num1);

 printf("the value of num2: ");
 scanf("%d",&num2);

 sum= num1+num2;
 sub=num1-num2;
 mul=num1*num2;
 div=num1/num2;

 printf("The sum of num1 and num2 is %d\n",sum);
 printf("The sub of num1 and num2 is %d\n",sub);
 printf("The mul of num1 and num2 is %d\n",mul);
 printf("The div of num1 and num2 is %d\n",div);

 return 0;

}
