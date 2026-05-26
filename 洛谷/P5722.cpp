#include<stdio.h>
int main()
{
	int n,i=1,a=0;
	scanf("%d",&n);
	while(i<=n)
	{
		a=a+i;
		i++;
	}
	printf("%d",a);
	return 0;
}
