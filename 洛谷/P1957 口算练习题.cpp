#include<stdio.h>
#include<string.h>
char a[50][3],b[100],n[10],c[20]; 
int main()
{
	int i,k,t;
	char m;                           //m是答案 
	scanf("%d\n",&i);                //输入i 
	for(int x=0;x<i;x++)             //第x行算式 
	{
		/*
		for(int p=0;p<=100;p++)
		{
			scanf("%c",&b[p]);
			if(b[p]=='\n')
				break;
		}
		*/
		gets(b);
		if(b[0]>='a'&&b[0]<='z')     //如果b是字母 
		{
			n[x]=b[0];
			a[x][1]=b[2];
			a[x][2]=b[4];
		}
		else                         //如果b是数字 
		{
			n[x]='d';
			a[x][1]=b[0];
			a[x][2]=b[2];
		}
	}
	for(int j=0;j<i;j++)
	{
		k=j;
		if(n[k]=='a')   //加法运算 
		{
			m=a[j][1]+a[j][2];
			sprintf(c,"%c+%c=%c",a[j][1],a[j][2],m);
			t=strlen(c);
			printf("%c+%c=%d\n%d",a[j][1],a[j][2],m,t);
		}
		if(n[k]=='b')   //减法运算 
		{
			m=a[j][1]-a[j][2];
			sprintf(c,"%c-%c=%c",a[j][1],a[j][2],m);
			t=strlen(c);
			printf("%c-%c=%c\n%d",a[j][1],a[j][2],m,t);
		}
		if(n[k]=='c')   //乘法运算 
		{
			m=a[j][1]*a[j][2];
			sprintf(c,"%c*%c=%c",a[j][1],a[j][2],m);
			t=strlen(c);
			printf("%c*%c=%c\n%d",a[j][1],a[j][2],m,t);
		}
		if(n[k]=='d')   //与前一个算式运算类型相同 
		{
			n[k]=n[k-1];
			j--;
			continue;
		}
	}
	return 0;
}
