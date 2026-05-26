#include<stdio.h>
int a[100];
int main()
{
	int n,b,m;
	printf("求中位数\n第一行请输入数的个数n，回车输入数字，空格隔开\n");
	scanf("%d",&n);
	if(n%2!=0)
	{
		m=(n+1)/2;
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
		printf("中位数是：%d",a[m]);
	}
	else
		printf("n要是奇数欧"); 
		return 0;
}

/*#include<stdio.h>
#include<math.h>
int min(int x,int y)
{
	int z;
	if(x>y) z=y;
	else z=x;
	return z;
}
int main()
{
	printf("第一行请输入数的个数n，回车输入数字，空格隔开\n");
	int n,q=1000000,l;
	if(n%2==0)
	{
		int min(int x,int y);
		scanf("%d",&n);
		for(int i=1;i<=n;i++)
		{
			int a,b,p,m,l;
			scanf("%d",&a);
			p=p+a;
			m=p/n;
			b=fabs(m-a);
			q=min(b,q);
			l=m-q;
		}
		printf("%d",l);
	}
	else
		printf("n要是奇数欧"); 
	return 0; 
}*/


/*for(int i=1;i<n;i++) 
	{
		for(int j=1;j<n-1;j++) 
		{
			if(a[j]>a[j+1]) 
			{
				b=a[j];
				a[j]=a[j+1];
				a[j+1]=b;
			}
		}
	}
*/
