#include<stdio.h>
int main()
{
    
    int i;
    printf("Even Numbers are:\n");
   for(i=2;i<=20;i++)
    {
        if(i%2==0)
        {
       printf("%d\n",i);
        }
     
    }
    printf("Odd Numbers are:\n");
   for(i=2;i<=20;i++)
    {
        if(i%2!=0)
        {
       printf("%d\n",i);
        }
     
    }
    
    return 0;
}