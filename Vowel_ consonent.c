#include<stdio.h>
int main()
{
    char c;
    printf("Enter a  value:");
    scanf("%c",&c);
    
    
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
    {
        printf(" %c The value is vowel",c);
    }
    else
    {
        printf(" This value is consonent",c);
    }
   
    return 0;
}