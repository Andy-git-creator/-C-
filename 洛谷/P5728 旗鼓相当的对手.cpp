#include<stdio.h>
#include<math.h>
int a[1000][10];	//[同学编号][三科成绩]
int main()
{
	int m=0,n;
	scanf("%d",&n);
	for(int h=1;h<=n;h++)
	{
		for(int k=1;k<=3;k++)
		{
			scanf("%d",&a[h][k]);
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			int A,b,c,s1,s2,d;
			A=abs(a[i][1]-a[j][1]);
			b=abs(a[i][2]-a[j][2]);
			c=abs(a[i][3]-a[j][3]);
			s1=a[i][1]+a[i][2]+a[i][3];
			s2=a[j][1]+a[j][2]+a[j][3];
			d=abs(s1-s2);
			if(A<=5&&b<=5&&c<=5&&d<=10)
				m++;
		}
	}
	printf("%d",m);
	return 0;
}
