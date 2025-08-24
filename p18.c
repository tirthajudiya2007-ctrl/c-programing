#include<stdio.h>
int main()
{
    int area,perimeter,L,B;
    printf("Enter the length: ");
    scanf("%d",&L);

    printf("Enter the breadth: ");
    scanf("%d",&B);

    area=L*B;
    perimeter=2*(L+B);

    printf("\nArea of rectangle is %dsq.unit",area);
    printf("\nPerimeter of rectangle is %dm",perimeter);

    return 0;


}
