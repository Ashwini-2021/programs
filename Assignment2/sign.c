//check whether given number is positive or negative
#include<stdio.h>
int main()
{
    int num;
    printf("Input a number:");
    scanf("%d",&num);
    if(num>0)
    {
        printf("%d is positive interger.",num);
    }
    else if(num<0)
    {
        printf("%d is negative number.",num);
    }
    else{
        printf("%d is zero.", num);
    }
    return 0;
}