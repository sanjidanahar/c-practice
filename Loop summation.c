#include<stdio.h>
int main()
{
    
    int i, sum=0;
   for(i=50;i<=60;i++)
    {
       printf("%d\n",i);
       sum = sum + i;
    }
    printf("The summation of total number is:%d",sum);
    return 0;
}