#include<stdio.h>
int sum,s=0;
int main()
{
	int m,n,x=0;
	scanf("%d",&n);
    sum=n*n;
    while(s<sum)
	{
        scanf("%d",&m);
        for(int i=0;i<m;i++)
		{
            printf("%d",x);
            s++;
            if(s%n==0)
                printf("\n");
        }
        x=1-x;
    }
    return 0;
}
