#include <stdio.h>
int main()
{
	int n;
	printf(" Enter a Number  :  ");
	scanf("%d",&n);
	if((n%2)!=0)
  	printf(" Wierd ");
  	else
    	{
      	if((n>=2)&&(n<=5))
        	printf(" Not Weird ");
        	else
          	if((n>=6)&&(n<=20))
            	printf(" Weird ");
              	else
                	if(n>20)
                  	printf(" Not weird");
    	}
	return 0;
}
