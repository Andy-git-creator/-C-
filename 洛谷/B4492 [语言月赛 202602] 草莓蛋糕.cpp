#include<stdio.h>
int a[500][500];
int main()
{
	int n,m,d,caomei=0,x=0;
	scanf("%d %d %d",&n,&m,&d);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	unsigned int i=0,j=0;
	while(i<=n)
	{
		if(a[i][j]==1)
			caomei++;
		x++;
		if(i%2!=0)
			j--;
		else
			j++;
		if(j==m||j==-1)
		{
			if(i%2!=0)
				j=0;
			else
				j=m-1;
			i++;	
		}
		if(x==d&&a[i][j]==0)
		{
			break;
		}
	}
	printf("%d",caomei);
	return 0;
} 
