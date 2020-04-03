/* Q. WAP TO SORT AN ARRAY IN INCREASING ORDER. */
#include <stdio.h>
int main()
{
    int a[100],b,c=0,i,j;
    printf("\n\t Enter size of an array  :  ");
    scanf("%d",&b);
    printf("\n\t Enter elements in array\n");
    for(i=0;i<b;i++)
       {
           printf("\n\tenter %d element  :  ",i+1);
           scanf("%d",&a[i]);
       }
    for(i=0;i<b;i++)
       {
           for(j=i;j<b;j++)
              {
                  if(a[i]>a[j])
                    {
                        c=a[i];
                        a[i]=a[j];
                        a[j]=c;
                    }
              }
       }
    printf("\n\t Sorted array in increasing order is :  ");
    for(i=0;i<b;i++)
       {
           printf("\t\n%d",a[i]);
       }
    return 0;
}
