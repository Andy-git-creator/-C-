#include<stdio.h>
int main()
{
	int a,b,c,A,B,C,t;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		t=a;a=b;b=t;
	}
	if(a>c)
	{
		t=a;a=c;c=t;
	}
	if(b>c)
	{
		t=b;b=c;c=t;
	}
	A=a;B=b;C=c;
	char s[3];
	scanf("%s",s);
	switch(s[0])
	{
		case 'A':printf("%d ",A);break;
		case 'B':printf("%d ",B);break;
		case 'C':printf("%d ",C);break;
	}
	switch(s[1])
	{
		case 'A':printf("%d ",A);break;
		case 'B':printf("%d ",B);break;
		case 'C':printf("%d ",C);break;
	}
	switch(s[2])
	{
		case 'A':printf("%d ",A);break;
		case 'B':printf("%d ",B);break;
		case 'C':printf("%d ",C);break;
	}
	return 0;
}
