#include<stdio.h>
int main()
{
    float maths,physics,chemistry,avg,total;
    printf("Enter the marks of maths:");
    scanf("%f",&maths);

    printf("Enter the marks of physics:");
    scanf("%f",&physics);

    printf("Enter the marks of chemistry:");
    scanf("%f",&chemistry);

    if(maths<35 || physics<35 || chemistry<35)
        printf("Result:Fail");
    else
        {
    total =maths+physics+chemistry;
    avg=total/3;
    printf("Total=%.2f\n",total);
    printf("Average=%.2f\n",avg);

    if(avg>=70)
    {
        printf("Grade=distinction");
    }
    else if(avg>=60)
         {
        printf("Grade=first");
    }
    else if(avg>=50)
         {
        printf("Grade=second");
    }
    else if(avg>=35)
     {
        printf("Grade=third class");
    }
    else
        printf("Fail");



        }
   return 0;

}
