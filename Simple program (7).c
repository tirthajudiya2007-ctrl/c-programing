#include<stdio.h>
int main()
{
  int min,hour;
  printf("Enter the mins: ");
  scanf("%d",&min);

  hour=min/60;
  printf("\n In %d mins there was %d hours",min,hour);

  return 0;


}
