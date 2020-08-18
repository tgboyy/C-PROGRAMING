// PROGRAM TO CHECK WHETHER A TRIANGLE IS A SCALELE, ISOSCELES OR AN EQUILATERAL TRIANGLE.
#include <stdio.h>
int main()
{
	int a1,a2,a3;
	printf(" Enter side 1  :  ");
	scanf("%d",&a1);
	printf(" Enter side 2  :  ");
	scanf("%d",&a2);
	printf(" Enter side 3  :  ");
	scanf("%d",&a3);
	if(a1==a2&&a2==a3)
   	printf(" Triangle is an equilateral triangle ");
     	else
       	if(a1==a2||a2==a3||a1==a3)
          	printf(" Triangle is an isosceles triangle ");
            	else
              	printf(" Triangle is a scalene triangle ");
	return 0;
}
