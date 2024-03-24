#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    if(x>0)
    {
        printf("The number is positive value",x);
    }
    else if(x<0)
    {
        printf("This number is negetive value",x);
    }
    return 0;
}