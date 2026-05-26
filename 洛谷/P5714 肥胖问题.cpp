#include<stdio.h>
int main()
{
	float m,h,x;
	scanf("%f%f",&m,&h);
	x=m/(h*h);
	if(x<18.5)
		printf("Underweight");
	else if(x<24)
			printf("Normal");
		else
			printf("%.6g\nOverweight",x);
	return 0;
}
