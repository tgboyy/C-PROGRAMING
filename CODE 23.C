//to check whether a number is a fibonacci number or not.
#include <stdio.h>
int main()
{
    int a,b=0,c=1,d,i,flag=0;
    printf("\n\tenter a number  :   ");
    scanf("%d",&a);
    for(i=0;i<a;i++)
        {
            d=c+b;
            if(a==c)
              {
                  flag=1;
                  break;
              }
            b=c;
            c=d;
        }
    if(flag==1)
       printf("\n\t%d is a fibonacci number",a);
      else
        printf("\n\t%d is not a fibonacci number",a);
    return 0;
}
