#include<stdio.h>
#define PI 3.14 
int main()
{
	float c,h,r,s1,s2,v1,v2;
	scanf("%f%f",&r,&h);   //输入r,h
	c=2*PI*r;
	s1=PI*r*r;
	s2=4*PI*r*r;
	v1=4/3*PI*r*r*r;
	v2=PI*r*r*h;
	printf("圆周长=%5.2f\n圆面积=%5.2f\n圆球表面积=%5.2f\n圆球体积=%5.2f\n圆柱体积=%5.2f",c,s1,s2,v1,v2);
	return 0;
}
