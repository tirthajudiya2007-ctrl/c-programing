#include<stdio.h>
int main()
{
    int arr[100],i;
    int largest,smaller;

    printf("Enter the 100 numbers:\n");
    for(i=0;i<100;i++)
    {
    scanf("%d",&arr[i]);
    }
    largest=smaller=arr[0];
    for(i=1;i<100;i++)
    {
        if(arr[i]>largest)
        {
         largest=arr[i];
        }
        if(arr[i]<smaller)
        {
            smaller=arr[i];
        }
          printf("The largest value is %d\n",largest);
          printf("The smaller value is %d\n",smaller);
          return 0;

    }
}
