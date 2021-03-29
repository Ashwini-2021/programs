//accept a co-ordinate point in a XY co-ordinate system and determine in which quadrant yhe co-ordinate point lies
#include<stdio.h>
int main()
{
    int co_x, co_y;
    printf("Enter a point (x,y):");
    scanf("%d %d",&co_x,&co_y);
   
    if((co_x>0)&&(co_y>0))
        {
             printf("Co-ordinate point lies in 1st quadrant.");
        }
    else if((co_x<0)&&(co_y>0))
        {
             printf("Co-ordinate point lies in 2nd quadrant.");
        }
    else if((co_x<0)&&(co_y<0))
        {
             printf("Co-ordinate point lies in 3rd quadrant.");
        }
    else if((co_x>0)&&(co_y<0))
        {
             printf("Co-ordinate point lies in 4th quadrant.");
        }
    else if((co_x=0)&&(co_y>0))
        {
             printf("point lies on positive side of y-axis");
        }
    else if((co_x=0)&&(co_y<0))
        {
             printf("point lies on negative side of y-axis");
        }
    else if((co_x>0)&&(co_y=0))
        {
             printf("point lies on positive side of x-axis");
        }
    else if((co_x<0)&&(co_y=0))
        {
             printf("point lies on negative side of x-axis");
        }
    else
        {
             printf("Co-ordinate point is origin");
        }
    return 0;
}