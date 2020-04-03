//to check whether a number is prime or not in a given range.
#include <stdio.h>
int main()
{
    int a,b,c,i,flag=0,j,x;
    printf("\n\t enter starting range  :  ");
    scanf("%d",&a);
    printf("\n\t enter ending range  :  ");
    scanf("%d",&b);
    for(i=a;i<=b;i++)
        {
            for(j=2;j<i/2;j++)
                {
                    
                    if((j%i)==0)
                      {
                          i=x;
                          flag=1;
                          break;
                      }
                }
        }
    if(flag==1)
       printf("\n\tNo prime numbers ");
      else
         printf("\n\t%d Is a prime number ",x);
    return 0;
}
