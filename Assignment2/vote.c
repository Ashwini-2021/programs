//read the age of candidate and determine whether it is eligible for casting his or her own vote
#include<stdio.h>
int main()
{
    int vote_age;
    printf("Enter the age of candidate:: ");
    scanf("%d",&vote_age);
    if(vote_age<18)
    {
        printf("sorry!! you are not eligible to cast your vote.\n");
         printf("you would be cast your vote after %d year.",18-vote_age);
    }
    else
    {
        printf("congartulations! you are eligible to casting your vote.");
    }
    return 0;
}