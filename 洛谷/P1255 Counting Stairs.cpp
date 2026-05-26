#include<stdio.h>
int main()
{
	int m=0,n;
	scanf("%d",&n);
	for(int i=0;i<=n;i++)
	{
		if(((n-i)%2)==0)
			m++;
	}
	printf("%d",m);
	return 0;
}
