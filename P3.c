#include<stdio.h>
int main()
{
    float net,gross,allowances=0.0,deductions=0.0;
    printf("Enter the gross salary:");
    scanf("%f",&gross);

    if(gross>10000)
    {
        allowances=0.10*gross;
        deductions=0.03*gross;
    }
     else if(gross>5000)
     {
         allowances=0.07*gross;
         deductions=0.02*gross;

     }
     else
     {
         allowances=0.0;
         deductions=0.0;
     }

     net=gross+allowances-deductions;

     printf("Allowances=%.2f\n",allowances);
     printf("deductions=%.2f\n",deductions);
     printf("net=%.2f\n",net);

     return 0;
}
