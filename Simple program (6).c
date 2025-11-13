#include<stdio.h>
int main()
{
  int hour,min;
  printf("Enter the hours: ");
  scanf("%d",&hour);

  min=hour*60;
  printf("\n In %d hours there was %d mins",hour,min);

  return 0;


}
