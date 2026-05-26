/*
int siweishu(int x)
{
	int a,b,c,d;
	a=x%1000;
	b=(x-1000*a)%100;
	c=(x-1000*a-100*b)%10;
	d=x-1000*a-100*b-10*b;
	printf("%d %d %d %d",a,b,c,d);
}
