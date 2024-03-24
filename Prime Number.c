#include<stdio.h>
int main()
{
    printf("Prime Number is 2 to 20");
    int i , x;
    for(i=2; i<=20; i++)
    {
        for(x=2;x<=i;x++)
        {
            if(i%x==0)
            break;
            else if(i==x+1)
            printf("\n%d",i);
        }
    }
    return 0;
}