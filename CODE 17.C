// PROGRAM TO CHECK WHETHER A TRIANGLE IS POSSIBLE BY CHECKING ITS SIDES.
#include <stdio.h>
int main()
{
	int n1,n2,n3,a1,a2,a3;
	printf(" Enter side 1  :  ");
	scanf("%d",&a1);
	printf(" Enter side 2  :  ");
	scanf("%d",&a2);
	printf(" Enter side 3  :  ");
	scanf("%d",&a3);
	n3=a1+a2;
	n1=a3+a2;
	n2=a1+a3;
	if(n1>a1||n2>a2||n3>a3)
   	printf(" Triangle is possible ");
     	else
        	printf(" Triangle is not possible ");
	return 0;
}
