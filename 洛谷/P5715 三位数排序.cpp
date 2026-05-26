#include<stdio.h>
int a[3],b;
int main()
{
	for(int k=0;k<3;k++)
	{
		scanf("%d",&a[k]);
	}
	for(int i=0;i<3;i++) 
	{
		for(int j=0;j<2;j++) 
		{
			if(a[j]>a[j+1]) 
			{
				b=a[j];
				a[j]=a[j+1];
				a[j+1]=b;
			}
		}
	}
	printf("%d %d %d",a[0],a[1],a[2]);
	return 0;
}
