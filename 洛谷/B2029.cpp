#include<stdio.h>
#include<math.h>
#define PI 3.14
int main()
{
	int h,r,n;
	float v;
	scanf("%d%d",&h,&r);
	if(1<=h<=500&&1<=r<=100)
	{
		v=h*r*r*PI;
		n=20000/v+1;
		printf("%d",n);
	}
	return 0;
 } 
