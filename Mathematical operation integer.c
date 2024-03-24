#include<stdio.h>
int main()
{
    int num1 = 14, num2 = 12, sum;
    sum = num1 + num2;
    printf("The summation is: %d", sum);
    printf("\n The summation  is %d and %d is: %d", num1, num2,sum);
    sum = num1 - num2;
    printf("\nThe subtraction is: %d", sum);
    sum = num1 * num2;
    printf("\nThe multiplication is %d",sum);
    sum = num1 / num2;
    printf("\nThe divison is: %d",sum);
    sum = num1 % num2;
    printf("\nThe modulus is: %d",sum);
    return 0;
    
}