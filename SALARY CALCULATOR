/*Write a C program to input basic salary of an employee and calculate its Gross
salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary >20000 : HRA = 30%, DA = 95% */

#include<stdio.h>
int main()
{
    int a,h,d,t;
    printf("\n\t Enter Basic salary of teh employee  :  ");
    scanf("%d",&a);
    if(a<=10000)
      {
          h=0.2*a;
          d=0.8*a;
          t=a+h+d;
      }
     else
       if((a>10000)&&(a<=20000))
         {
             h=0.25*a;
             d=0.9*a;
             t=a+h+d;
         }
        else
          if((a>10000)&&(a<=20000))
            {
                h=0.3*a;
                d=0.95*a;
                t=a+h+d;
            }
    printf("\n\t HRA            :  %d",h);
    printf("\n\t DA             :  %d",d);
    printf("\n\t Gross Salary   :  %d",t);
    return (0);
}
