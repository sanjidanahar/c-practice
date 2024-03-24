#include<stdio.h>
int main()
{
    int year;
    printf("Enter a year:");
    scanf("%d",&year);
    
    
    if(year%4==0)
    {
        printf(" %d This is leap year",year);
    }
    else if(year%100!=0)
    {
        printf(" %d This is not leap year",year);
    }
   
    return 0;
}