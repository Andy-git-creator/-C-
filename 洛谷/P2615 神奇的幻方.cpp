#include<stdio.h>
int a[40][40];
int main()
{
	int n,b,K,m=0;
	scanf("%d",&n);
	b=(n+1)/2;
	a[1][b]=1;
	for(K=2;K<=n*n;K++)
	{
		if(a[1][n]==K-1)          //第一行最后一列 
		{
			a[2][n]=K;
			m=1;
			break;
		}
		else
		{
			for(int i=1;i<=n-1;i++) 
			{
				if(a[1][i]==K-1)      //第一行不是最后一列 
				{
					a[n][i+1]=K;
					m=1;
					break; 
				}
			}
		}
		if(m==0)                  //不在第一行 
		{
			for(int i=1;i<=n;i++)
			{
				if(a[i][n]=K-1)      //最后一列但不在第一行 
				{
					a[i-1][1]=K;
					m=2;
					break;
				}
			}
			if(m==2)
			{
				for(int i=2;i<=n;i++)
				{
					for(int j=1;j<=n-1;j++)
					{
						if(a[i][j]==K-1)
						{
							if(a[i-1][j+1]==0)
								a[i-1][j+1]=K;
							else
								a[i+1][j]=K;
							break;
						}
					}
				}
			}
		}
		m=0;	
	}
	int t=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			printf("%d ",a[i][j]);
			t++;
			if(t%n==0)
				printf("\n");
		}
	}
	return 0;
} 
