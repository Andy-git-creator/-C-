#include<stdio.h>
int main()
{
	long long int m,n;
	int a[10]={0};
	scanf("%lld%lld",&m,&n);
	for(long long int i=m;i<=n;i++)
	{
		long long int t=i;
		while(t!=0)
		{
			a[t%10]++;
			t=t/10;
		}
	}
	for(int i=0;i<=9;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
