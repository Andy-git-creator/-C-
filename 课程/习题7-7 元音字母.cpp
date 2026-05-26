/*
int yuanyinzimu(char c)
{
	char c;
	char a[1000];
	int m=0;
	while(c=getchar()!='\n')
	{
		m++;
		if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
		{
			a[m]=c;
		}	
	}
	for(int j=1;j<=m;j++)
	{
		printf("%c",a[j]);
	}
}
