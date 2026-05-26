#include<stdio.h> 
int main()
{
	int p=0,q=0,n,k;
	double a=0,b=0,x,y;
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;i++)
	{
		if(i%k==0)
		{
			a=a+i;
			p++;
		}
		else
		{
			b=b+i;
			q++;
		}
	}
	x=a/p;
	y=b/q;
	printf("%.1lf %.1lf",x,y);
	return 0;
}
