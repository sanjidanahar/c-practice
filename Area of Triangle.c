#include<stdio.h>
int main()
{
    int base,height,area;
    printf("Enter the base number:");
    scanf("%d",&base);
    printf("Enter the height number:");
    scanf("%d",&height);
    area= 0.5 * base * height;
    printf("The area of triangle is: %d", area);
    return 0;
}