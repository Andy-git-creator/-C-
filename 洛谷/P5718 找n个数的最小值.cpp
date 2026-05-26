#include<stdio.h>
int main()
{
	int n,m=1000;
	int min(int x,int y);
	scanf("%d\n",&n);
	for(int i=1;i<=n;i++)
	{
		int a;
		scanf("%d",&a);
		m=min(a,m);
	}
	printf("%d",m);
	return 0;
} 
int min(int x,int y)
{
	int z;
	if(x>y) z=y;
	else z=x;
	return z;
}
