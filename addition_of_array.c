#include<stdio.h>
int main()
{
    int a[20],b[20],c[20],i,n;
    printf("how many elements tou want in array::");
    scanf("%d",&n);
    printf(" enter elements in array a:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nelements in 1st array are::\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
     printf(" \nenter elements in array b:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("\nelements in 2nd array are::\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",b[i]);
    }
    printf("\naddition of elements in two arrays are::\n");
    for(i=0;i<n;i++)
    {
        c[i]=a[i]+b[i];
        printf("%d\t",c[i]);
    }
    return 0;
}