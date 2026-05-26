#include<stdio.h>
int a[1001],b;
int main()
{
	int n;
	double m;
	scanf("%d",&n);
	for(int p=1;p<=n;p++)
		{
			scanf("%d",&a[p]);
		}
	for(int i=1;i<n;i++) 
	{
		for(int j=1;j<=n-i;j++) 
		{
			if(a[j]>a[j+1]) 
			{
				b=a[j];
				a[j]=a[j+1];
				a[j+1]=b;
			}
		}
	}
	double z=0.0;
	if(n==3)
		m=(double)a[2];
	else
	{
		for(int y=2;y<=n-1;y++)
		{
			z=z+(double)a[y];
		}
		m=z/(n-2);
	}
	printf("%.2lf",m);
	return 0;
}
