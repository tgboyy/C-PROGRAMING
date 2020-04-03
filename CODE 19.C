// PROGRAM TO FIND ROOTS OF A QUADRATIC EQUATION.
#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,x,y,d,d1;
	printf(" Enter coefficient of x square (x^2)  :  ");
	scanf("%f",&a);
	printf(" Enter coefficient of x  :  ");
	scanf("%f",&b);
	printf(" Enter value of constant  :  ");
	scanf("%f",&c);
	printf("/n/t Equation is :  (%f)x^2 + (%f)x +(%f)",a,b,c);
	d=(b*b)-(4*a*c);
	d1=sqrt(d);
	printf("\n  d1 :  %f",d1);
	if(d>0||d==0)
 	{
     	x=(-b+d1)/(2*a);
     	y=(-b+d1)/(2*a);
     	printf("\n Roots of quadratic equation are %f and %f ",x,y);
 	}
     	else
       	printf("roots of quadratic equations are imaginary....");
	return 0;
}
