#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    if(x%2==0)
    {
        printf("This number is Even number",x);
    }
    else if(x%2!=0)
    {
    printf("THis number is odd number",x);
    }
    
    return 0;
}