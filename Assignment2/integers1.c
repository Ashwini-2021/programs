//accept two integers ane check whether they are equal or not
#include<stdio.h>
int main()
{
    int ino1, ino2;
    printf("Enter the ino1 and ino2:");
    scanf("%d  %d",&ino1,&ino2);
    if(ino1==ino2)
    {
        printf("Number1 and Number two are equal!\n");
    }
    else
    {
        printf("Number1 and Number2 are not equal!!");
    } 
    return 0;   
}