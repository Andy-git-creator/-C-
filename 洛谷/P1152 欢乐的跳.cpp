#include<stdio.h>
#include<math.h>
int a[1001],b[1001];
int main()
{
	int m=0,n;
	scanf("%d",&n);
	for(int k=1;k<=n;k++)
	{
		scanf("%d",&a[k]);
	}
	for(int p=1;p<n;p++)
	{
		b[p]=fabs(a[p+1]-a[p]);
	}
	for(int i=1;i<n;i++)
	{
		for(int j=1;j<n-i;j++)
		{
			int t;
			if(b[j]>b[j+1])
			{
				t=b[j];
				b[j]=b[j+1];
				b[j+1]=t;
			} 
		}
	}
	b[n]=n-1;
	for(int q=1;q<n;q++)
	{
		if((b[q+1]==b[q]+1)||(b[q+1]==b[q]-1)||(b[q+1]==b[q])) 
			m++;	
	}
	if(m==(n-1))
		printf("Jolly");
	else
		printf("Not jolly");
	return 0;
}
