/*
int tongjizifu(char c)  //需要定义全局变量 int a=0,b=0,d=0,e=0
{
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
}
