#include<stdio.h>
int Gcd;
void gcd(int u,int v)
{
	int t,r;
	if(v>u)
	{
		t=u;u=v;v=t;
	}
	while((r=u%v)!=0)
	{
		u=v;v=r;
	}
	Gcd=v;
}
int main()
{
	void gcd(int u,int v);
    int u,v,m;
    scanf("%d %d",&u,&v);
    m=gcd(u,v);
	printf("%d",m);
	return 0;
 } 

