//find largest of the three numbers
#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter the three values of the number::");
    scanf("%d  %d  %d",&num1,&num2,&num3);
    printf("first number=%d\nsecond number=%d\nthird number=%d",num1,num2,num3);

    if((num1>num2)&&(num1>num3))
    printf("\nThe first number is gretest among three.", num1);
    
    if((num2>num3)&&(num2>num1))
    printf("\nThe second number is gretest among three.", num2);

    if((num3>num1)&&(num3>num2))
    printf("\nThe third number is gretest among three.", num3);

    return 0;
}