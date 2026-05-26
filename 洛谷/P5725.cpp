#include<stdio.h>
int main()
{
	int n,m=0,sum,p=1,q;
	scanf("%d",&n);
	for(int i=1;i<=n*n;i++)
	{
		if(i<10)
			printf("0");
		printf("%d",i);
		m++;
		if(m==n)
		{
			printf("\n");
			m=0;
		}
	}
	printf("\n");
	m=0;
	sum=(1+n)*n/2; 
	for(int i=1;i<=sum;i++)
	{
		q=n-p;
		if(m==0)
		{
			for(int j=1;j<=q;j++)
				printf("  ");
		}
		if(i<10)
			printf("0");
		printf("%d",i);
		m++;
		if(m==p)
		{
			printf("\n");
			p++;
			m=0;
		}
	}
	return 0;
}
