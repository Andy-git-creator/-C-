#include<stdio.h>
int main()
{
	int a,i=1;
	scanf("%d",&a);
	while(a!=1)
	{	
		a=a/2; 
		i++;
	}
	printf("%d",i);
	return 0;
}
