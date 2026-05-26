#include<stdio.h>
#include<math.h>
double dis(double x,double y,double z,double t)
{
	return(sqrt((z-x)*(z-x)+(t-y)*(t-y)));
}
int main()
{
	double a,b,c,d,e,f;
	double l1,l2,l3;
	scanf("%lf %lf\n",&a,&b);
	scanf("%lf %lf\n",&c,&d);
	scanf("%lf %lf",&e,&f);
	l1=dis(a,b,c,d);
	l2=dis(c,d,e,f);
	l3=dis(e,f,a,b);
	printf("%.2f",l1+l2+l3);
	return 0;
}
