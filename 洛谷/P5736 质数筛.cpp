#include<stdio.h>
int a[101];
int zhishu(int x)
{
	if(x<=1)
		return 0;
	if(x==3||x==2)
		return 1;
	else
	{
   		for (int i=2;i*i<=x;i++)
		{
			if(x%i==0)
				return 0;
		}
        return 1;
	}
}
int main()
{
	int n;
	scanf("%d\n",&n);
	for(int k=1;k<=n;k++)
	{
		scanf("%d",&a[k]);
	}
	for(int i=1;i<=n;i++)
	{
		if(zhishu(a[i])==1)
			printf("%d ",a[i]);
	}
	return 0;
}
