/*void copystr(char from[],char to[])
{
	int i=0;
	while(from[i]!='\0')
	{
		to[i]=from[i];
		i++;
	}
	to[i]='\0';
}




void copystr(char *p1,char *p2)
{
	while(*p1!='\0')
	{
		*p2=*p1;
		p1++;
		p2++;
	}
	*p2='\0';
}
