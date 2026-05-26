#include<stdio.h>
int main()
{
	int a[100],n;
	for(int i=0;i<100;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]==0)
		{
			n=i;break; 
		}
	}
	for(int i=n-1;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
	return 0;
 } 
