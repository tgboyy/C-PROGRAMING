/* PROGRAM TO FIND FIBONACCI SERIES. */
#include<stdio.h>
#include<conio.h>
int main()
{ 
 int i,n,c,a=0,b=1;
 printf("enter the number of terms  :  "); 
	scanf("%d",&n);
 for (i=0;i<n;++i) 
	{
        c=a+b;
        a=b;
        b=c;
		printf("\n%d",c);
    }
   getch();
}
