/* PROGRAM TO FIND GRADE POINTS OF A STUDENT ACCORDING TO ITS MARKS OBTAINED.
   'A' IF 100<=MARKS>90
   'B' IF 90<=MARKS>80
   'C' IF 80<=MARKS>70
   'D' IF 70<=MARKS>60
   'E' IF 60<=MARKS>50
   'F' IF 50<=MARKS   */
#include <stdio.h>
#include<ctype.h>
int main()
{
    int p,ch,b,m,c,t,a;
    printf("\t Enter marks of subjects below (out of 1000) \n");
    printf("\n\t\t\tPHYSICS      :    ");
    scanf("%d",&p);
    printf("\n\t\t\tCHEMISTRY    :    ");
    scanf("%d",&ch);
    printf("\n\t\t\tBIOLOGY      :    ");
    scanf("%d",&b);
    printf("\n\t\t\tMATHEMATICS  :    ");
    scanf("%d",&m);
    printf("\n\t\t\tCOMPUTER     :    ");
    scanf("%d",&c);
    t=p+ch+b+m+c;
    a=t/5;
    printf("\tTotal marks obtained are   :    %d\n",t);
    printf("\tPercentage is       :    %d%\n",p);
    if(a>=90)
      {
          printf("\n\t Grade is   :   A");
      }
      else
       if((a<=89)||(a>=80))
        {
            printf("\n\t Grade is   :   B");
        }
        else
         if((a<=79)||(a>=70))
           {
                printf("\n\t Grade is   :   C");
           }
           else
            if((a<=69)||(a>=60))
              {
                 printf("\n\t Grade is   :   D");
              }
              else
               if((a<=59)||(a>=50))
                {
                    printf("\n\t Grade is   :   E");
                }
                else
                  {
                    printf("\n\t Grade is   :   F");
                  }
    return 0;
}
