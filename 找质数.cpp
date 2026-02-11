/*
int zhishu(int x)
{
	if(x<=1)
		return 0;
	if(x==3)
		return 1;
   	else
	{
   		for (int i=2;i*i<=x;i++)
		{
			if(x%i==0)
				return 0;
			else
				return 1;
		}
	}
}
