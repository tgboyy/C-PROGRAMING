// PROGRAM TO FIND PROFIT OR LOSS.
#include <stdio.h>
int main()
{
    int sp,cp,p,l;
    printf("\t Enter Cost Price of the product    :   ");
    scanf("%d",&cp);
    printf("\t Enter Selling Price of the product    :   ");
    scanf("%d",&sp);
    p=sp-cp;
    l=cp-sp;
    if(cp>sp)
      {
          printf("\n\t Loss is  :   %d",l);
      }
      else
         {
             printf("\n\t Profit is  :   %d",p);
         }
    return 0;
}
