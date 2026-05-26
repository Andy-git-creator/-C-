#include<stdio.h>
#include<ctype.h>
int main()
{
	int a=0,b=0,d=0,e=0;
	char c;
	while((c=getchar())!='\n')
	{
		if(c>='a'&&c<='z'||c>='A'&&c<='Z')
			a++;
		else if(c==' ')
				b++;
			else if(isdigit(c)==1)
					d++;
				else
					e++;
	}
	printf("字母数=%d\n空格数=%d\n数字数=%d\n其它字符数=%d",a,b,d,e);
	return 0;
}
