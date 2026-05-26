#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,d,e;
	scanf("%lf%lf%lf",&a,&b,&c);
	d=(a+b+c)/2;
	e=sqrt(d*(d-a)*(d-b)*(d-c));
	printf("%1.1lf",e);
	return 0;
 } 
