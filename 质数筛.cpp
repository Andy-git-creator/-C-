/*
int zhishu(int x)
{
	if(x<=1)
		return 0;
	if(x==3||x==2)
		return 1;
	else
	{
   		for (int i=2;i*i<=x;i++)
		{
			if(x%i==0)
				return 0;
		}
        return 1;
	}
}
