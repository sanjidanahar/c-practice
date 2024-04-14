#include<stdio.h>
int main()
{
    int i, x=1, y;
    printf("Enter a number:");
    scanf("%d",&y);
    for(i=1;i<=y;i++)
    {
        x=x*i;
        
    }
    printf("The factorial number is:%d",x);
    return 0;
}

