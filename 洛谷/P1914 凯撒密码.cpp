#include<stdio.h>
#include<string.h>
int main()
{
	char a[50],m;
	int n;
	scanf("%d",&n);
	scanf("%s",a);
	for(int i=0;i<strlen(a);i++)
	{
		m=(a[i]-'a'+n)%26+'a';
		printf("%c",m);
	}
	return 0;
}
