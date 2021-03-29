//check whether given number is even or odd
#include<stdio.h>
int main()
{
    float num1,rem;
    printf("Input an integer:\n");
    scanf("%f",&num1);
   /* rem=num1%2;*/
    rem=(num1/2)*2;
    if(rem==num1)
    {
        printf("%f is an even integer.",num1);
    }
    else
    {
        printf("%f is odd integer.",num1);
    }
    return 0;
}