#include<stdio.h>

int zhishu(int x)
{
	if(x<=1)
		return 0;
	if(x==3||x==2)
		return 1;
	else
	{
   		for (int i=2;i*i<=x;i++)
		{
			if(x%i==0)
				return 0;
		}
        return 1;
	}
}

int main()
{
	int zhishu(int);
	int l,m,sum=0;
	scanf("%d",&l);
	for(int i=2;;i++)
	{
		if(zhishu(i)==1){
			sum=sum+i;
			if(sum<=l)
			{
				printf("%d\n",i);
				m++;
			}
			else
				break;
		}
	}
	printf("%d",m);
	return 0;
}
