#include<stdio.h>
int main()
{
	int a,b,c,d,n;
	scanf("%d",&n);
	if(n%2==0&&((4<=n)&&(n<=12)))
		a=1;
	else
		a=0;
	if(n%2==0||((4<=n)&&(n<=12)))
		b=1;
	else
		b=0;
	if((n%2==0&&((4>n)||(n>12)))||(n%2!=0&&((4<=n)&&(n<=12))))
		c=1;
	else
		c=0;
	if(n%2!=0&&((4>n)||(n>12)))
		d=1;
	else
		d=0;
	printf("%d %d %d %d",a,b,c,d);
	return 0; 
} 
