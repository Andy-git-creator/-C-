#include<stdio.h>
int main()
{
	int a=0,n;
	scanf("%d",&n);
	for(int i=1;i*i<=n;i++) 
    {
		if((n%i)==0)
		{
			a++;
		}
	}
	printf("%d",a);	
	return 0;
} 
