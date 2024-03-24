#include<stdio.h>
int main()
{
    //area = length * breadth
    int length, breadth, result;
    printf("Enter the length number:");
    scanf("%d",&length);
    printf("Enter the breadth number:");
    scanf("%d",&breadth);
    result = length * breadth;
    printf("The area of rectengular is:%d",result);
    return 0;
}