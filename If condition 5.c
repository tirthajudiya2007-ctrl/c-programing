#include<stdio.h>
int main()
{
    float net,gross,discount=0;
    printf("Enter the gross sales:");
    scanf("%f",&gross);

    if(gross>20000)
    {
        discount=0.15*gross;
    }
    else if(gross>10000)
    {
        discount=0.10*gross;
    }
    else{
        discount=0.0;
    }

    net=gross-discount;
    printf("Gross:%.2f\n",gross);
    printf("Discount:%.2f\n",discount);
    printf("net:%.2f\n",net);

    return 0;
}
