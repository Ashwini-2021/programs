/*4.	Write a program to accept n numbers and store all prime numbers in an array called prime. 
Display this array.*/
#include<stdio.h>
int main()
{
    int arr[50],i,n,j,prime[50],k=0,count;
    printf("number of elements in array::");
    scanf("%d",&n);
    printf("enter elements::");
    for(i=0;i<n;i++)
    {  scanf("%d",&arr[i]); }
    printf("elemnts in array are::\n");
    for(i=0;i<n;i++)
    { printf("%d\t",arr[i]); }
 for(i=0;i<n;i++)
{ count=0;
 for(j=2;j<arr[i];j++)
 {
   if(arr[i]%j==0)
   {count=1;
   break;
   }
 }
 if(count==0)
 {
   prime[k]=arr[i];
   k++;
 }
}
 printf("\nprime elements in given array are::\n");
 for(i=0;i<k;i++)
 {
   printf("%d\t",prime[i]);
 }
 return 0;   
}
