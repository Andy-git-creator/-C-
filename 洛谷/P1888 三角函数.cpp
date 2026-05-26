#include<stdio.h>
//int max,min;
int main()
{
	int maxnumber(int,int,int);
	int a,b,c,i,m,n,t;
	scanf("%d%d%d",&a,&b,&c);
	if(a<b)
		{t=a;a=b;b=t;}
	if(a<c)
		{t=a;a=c;c=t;}
	if(b<c)
		{t=b;b=c;c=t;}
	for(i=c;i>=1;i--) 
	{
		if(a%i==0&&c%i==0)
 		{
 			break;
		}
	}
	m=c/i;
	n=a/i;
	printf("%d/%d",m,n);
	return 0;
}

/*int maxnumber(int a,int b,int c)
{
	int k[3];
	k[0]=a;k[1]=b;k[2]=c;
	for(int i=0;i<=2;i++)
	{
		for(int j=0;j<=2-i;j++)
		{
			if(k[j]<k[j+1])
			{
				int t;
				t=k[j];k[j]=k[j+1];k[j+1]=t;
			}
		}
	}
	max=k[0];
	min=k[2];
}
*/
