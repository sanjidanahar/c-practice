#include<stdio.h>
#include<math.h>
int main()
{
    float number1 = 14.5, number2 = 12.5, result;
    result = number1 + number2;
    printf("\nThe summation is: %f",result);
    result = number1 - number2;
    printf("\nThe substraction is: %f",result);
    result = number1 * number2;
    printf("\nThe multiplication is: %f",result);
    result = number1 / number2;
    printf("\nThe quotient is: %f",result);
    result = fmod(number1,number2);
    printf("\nThe modulus is: %f",result);
    return 0;
}