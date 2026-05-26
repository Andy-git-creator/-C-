#include<stdio.h>
int a[1000];
int main()
{
	for(int k=1;k<=100;k++)
	{
		a[k]=k;
	}
	int zhishu(int x);
	for(int t=1;t<=100;t++)
	{
		if(zhishu(a[t])==1)
			printf("%d ",a[t]);
	}
	return 0;
} 

int zhishu(int x)
{
	if(x<=1)
		return 0;
   	for (int i=2;i*i<=x;i++)
	{
		if(x%i==0)
			return 0;
		else
			return 1;
	}
}
