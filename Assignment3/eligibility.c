//find eligibility of admission for professional course based on
/* 
marks in math>=65
marks in phy >=55
marks in chem>=50
total marks in all sub>=190
or
total marks in math and phy >=140 */
#include<stdio.h>
int main()
{
    int math, phy, chem,mpc,mp;
    printf("Eligibility criterion for admission is::\n");
    printf("marks in math>=65\n");
    printf("marks in phy>=55\n");
    printf("marks in chem>=50\n");
    printf("total marks in all sub>=190 or \ntotal marks in math and phy >=140");

    printf("\nEnter the marks odtain in maths::");
    scanf("%d",&math);
    printf("\nEnter the marks odtain in phy::");
    scanf("%d",&phy);
    printf("\nEnter the marks odtain in chem::");
    scanf("%d",&chem);
    mpc=math+phy+chem;
    printf("Total marks in math, phy and chem is:: %d\n",mpc);
    mp=math+phy;
    printf("Total marks in math and phy is::%d\n",mp);
    
    if(math>=65)
    {
        if(phy>=55)
        {
            if(chem>=50)
            {
              if((mpc>=190)||(mp>=140))
              {
                  printf("candidate is eligible for admission.\n");
              }
              else
              {
                  printf("candidate is not eligible.\n");
              }
            }
            else
            {
              printf("candidate is not eligible.\n");
            }
        }
        else
            {
            printf("candidate is not eligible.\n");
            }
    }
    else
        {
        printf("candidate is not eligible.\n");
        }
    

    return 0;
}