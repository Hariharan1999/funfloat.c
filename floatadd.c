#include <stdio.h>
float sum(float a, float b)
{
    sum=a+b;
}
float main()
{
    float num1, num2,sum, p;
    printf("Enter first Number: ");
    scanf("%f", &num1);
    printf("Enter second Number: ");
    scanf("%f", &num2);
    p=sum(num1,num2);
    printf("Sum of entered numbers is:%.2f",p);
}
