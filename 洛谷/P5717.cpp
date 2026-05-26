#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	scanf("%d%d%d",&a,&b,&c);
	if(a>=b)
	{
		if(b<=c)
		{
			if(a>=c)
			{
				d=b,b=c,c=d;
			}
			else
				d=a,a=c,c=d;
				f=b,b=c,c=f;
		}
	}
	else
	{
		e=a,a=b,b=e;
		if(b<=c)
		{
			if(a>=c)
			{
				d=b,b=c,c=d;
			}
			else
				d=a,a=c,c=d;
				f=b,b=c,c=f;
		}
	}                  //a,b,c从大到小排序，a>b>c 
	if((b+c)>a)
	{
		if((b*b+c*c)==a*a) 
			printf("Right triangle\n");
		if((b*b+c*c)>a*a)
			printf("Acute triangle\n");
		if((b*b+c*c)<a*a)
			printf("Obtuse triangle\n");
		if(b==c)
			printf("Isosceles triangle\n");
		if(a==b&&b==c&&a==c)
			printf("Equilateral triangle");
	}
	else
		printf("Not triangle");
	return 0;
} 
