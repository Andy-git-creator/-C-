#include <stdio.h> 
int main()
{
	int m,n,i,q,p,a,b;
	printf("输入m，n的值");
	scanf("%d,%d",&m,&n);
	if(m>=n)
		a=n,b=m;
	else
		a=m,b=n;     //a为m较小的数,b为较大的数 
	for(i=a;i>=1;i--) 
	{
		if(m%i==0&&n%i==0)
 			printf("最大公约数＝%d",i);break;
	}
	for(q=1;q<=m*n;q++)
	{
		if(q*m%n==0)
			p=q*m;
 			printf("最小公倍数=%d",p);break;
	}
 	return 0;
}

int 
