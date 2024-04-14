#include<stdio.h>
int main()
{
   int i, count = 0;
   printf("Enter a number:");
   scanf("%d",&i);
   while(i>0)
   {
       i = i / 10;
       count = count + 1;
   }
   printf("The number is:%d",count);
   return 0;
   
    
}



