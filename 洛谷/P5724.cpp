#include<stdio.h>
int a[100];
int main()
{
	int m,n;
	scanf("%d\n",&n);
	for(int p=1;p<=n;p++)
	{
		scanf("%d",&a[p]);
	}
	for(int j=0;j<n-1;j++)
	{
		for(int i=0;i<n-1-j;i++)
		{
			if (a[i]>a[i+1])
			{
				int t;
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
		}
	}
	m=a[n]-a[1];
	printf("%d",m);
	return 0;
}
