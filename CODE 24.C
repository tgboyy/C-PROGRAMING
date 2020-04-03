/* Q. WAP TO COUNT NUMBER OF DUPLICATE ELEMENTS IN AN ARRAY. */
#include <stdio.h>
int main()
{
    int a[100],b,c=0,i,j;
    printf("\n\t Enter size of an array  :  ");
    scanf("%d",&b);
    printf("\n\t Enter elements in array  :  ");
    for(i=0;i<b;i++)
       {
           printf("\n\tenter %d element  :  ",i+1);
           scanf("%d",&a[i]);
       }
    for(i=0;i<b;i++)
       {
           for(j=i+1;j<b;j++)
              {
                  if(a[i]==a[j])
                    {
                        c++;
                    }
              }
       }
    if(c==0)
      {
          printf("\n\t There are no duplicate eelements ");
      }
      else
      {
          printf("\n\t No. of dupliate elements are  :  %d",c);
      }
    return 0;
}
