#include<stdio.h>
int zhong[1000],jiang[1000];
int main()
{
	int n;  //²ÊÆ±ÕÅÊı 
	int a=0,b=0,c=0,d=0,e=0,f=0,t=0;
	scanf("%d\n",&n);
	for(int p=1;p<=7;p++)
	{
		scanf("%d",&zhong[p]); //ÖĞ½±ºÅÂë 
	}
	for(int d=1;d<=n;d++)
	{
		int i=0;
		int cai[100];
		for(int q=1;q<=7;q++)
		{
			scanf("%d",&cai[q]); //²ÊÆ±ºÅÂë 
		}
		for(int k=1;k<=7;k++)
		{
			for(int h=1;h<=7;h++)
			{
				if(cai[k]==zhong[h])
					i++;
			}
		}
		jiang[d]=i;
	}
	for(int x=1;x<=n;x++)
	{
		switch(jiang[x])
		{
			case 1:f++;break;
			case 2:e++;break;
			case 3:d++;break;
			case 4:c++;break;
			case 5:b++;break;
			case 6:a++;break;
			case 7:t++;break;
		}
	}
	printf("%d %d %d %d %d %d %d",t,a,b,c,d,e,f);
	return 0;
} 
