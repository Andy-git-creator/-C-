#include<stdio.h>
int main()
{
	int n,a,b,c,d,e;
	scanf("%d",&n);
	a=n/10000;
	b=(n-10000*a)/1000;
	c=(n-10000*a-1000*b)/100;
	d=(n-10000*a-1000*b-100*c)/10;
	e=(n-10000*a-1000*b-100*c-10*d)/1;
	if(n>=10000)
	{	
		printf("5位数\n");
		printf("%d,%d,%d,%d,%d\n",a,b,c,d,e);
		printf("%d%d%d%d%d",e,d,c,b,a);
	}
	else if(n>=1000)
		{
			printf("4位数\n");
			printf("%d,%d,%d,%d\n",b,c,d,e);
			printf("%d%d%d%d",e,d,c,b);
		}
		else if(n>=100)
			{
				printf("3位数\n");
				printf("%d,%d,%d\n",c,d,e);
				printf("%d%d%d",e,d,c);
			}
			else if(n>=10)
				{
					printf("2位数\n");
					printf("%d,%d\n",d,e);
					printf("%d%d",e,d);
				}
				else
				{
					printf("1位数\n");
					printf("%d",n);
					printf("%d",n);
				}
	return 0;
}
