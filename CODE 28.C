/*Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill */


#include<stdio.h>
int main()
{
    int a,b,c,d,s1,s2,s3,s4,sum=0;
    printf("\n\t Enter no. of units consumed  :  ");
    scanf("%d",&a);
    if(a<=50)
       {
           sum=a*0.5;
       }
     else
       if((a>50)&&(a<=150))
         {
             s1=50*0.5;
             b=a-50;
             s2=b*0.75;
             sum=s1+s2;
         }
        else
          if((a>150)&&(a<=250))
            {
                s1=50*0.5;
                b=a-50;
                s2=b*0.75;
                c=b-100;
                s3=c*1.2;
                sum=s1+s2+s3;
            }
           else
             if(a>250)
               {
                    s1=50*0.5;
                    b=a-50;
                    s2=b*0.75;
                    c=b-100;
                    s3=c*1.2;
                    d=c-100;
                    s4=d*1.5;
                    sum=s1+s2+s3+s4;
                }
    sum=sum*0.2;
    printf("\n\tTotal amount is  :  %d",sum);
    return(0);
}
