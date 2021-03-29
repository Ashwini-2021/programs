/*read a temperature in cetntigrate and display a suitable message according to temp state bellow:
temp<0 then freezing whether
temp 0-10 then very cold whether
temp 10-20 then cold whether
temp 20-30 then normal in temp
temp 30-40 then its hot
temp >40 then its very hot
*/
#include<stdio.h>
int main()
{
    int temp;
    printf("Enter todays temperature in centigrade::");
    scanf("%d",&temp);

    if (temp<=0)
    {
       printf("Todays whether is freezing whether.");/* code */
    }
    else if((temp>0)&&(temp<=10))
    {
        printf("Todays whether is very cold whether.");
    }
    else if((temp>10)&&(temp<=20))
    {
        printf("Todays whether is cold.");
    }
    else if ((temp>20)&&(temp<=30))
    {
        printf("Todays whether is Normal in temperature.");
    }
    else if((temp>30)&&(temp<=40))
    {
        printf("Todays whether is hot.");
    }
    else if(temp>40)
    {
        printf("Todays whether is very hot.");
    }
    else
    {
        printf("very very hot.");
    }
    
 return 0;   
    
}