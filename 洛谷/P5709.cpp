#include<stdio.h> 
int main()
{
	int m,t,s,n,b;
	float a;
	scanf("%d%d%d",&m,&t,&s);
	if(m*t>=s)
	{
		if(t!=0)
		{
			n=s/t;
			a=s%t;
			if(a==0)
				b=m-n;
			else
				b=m-n-1;
		}
		else
			b=0;
	}
	else
		b=0;
	printf("%d",b);
	return 0;
}
