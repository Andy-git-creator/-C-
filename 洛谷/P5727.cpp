#include<stdio.h>
int main()
{
    int n,a[1000],j=0;
    scanf("%d", &n);
    int temp=n; 
    while(temp!=1)
    {
        if(temp%2==0)
            temp/=2;
        else
            temp=temp*3+1;
        a[j++]=temp;
        if(j>=1000)break;
    }
    for(int k=j-1;k>=0;k--)
    {
        printf("%d ",a[k]);
    }
    printf("%d",n);
    return 0;
}
/*#include<stdio.h>
int main()
{
	int n,a[1000],b,j;
	scanf("%d",&n);
	for(int i=n;i>=1;i--)
	{
		for(j=0;;j++)
		{
		if(i%2==0)
			i=i/2;
		else
			i=i*3+1;
		a[j]=i;break;
		}
		b=j;
	}
	for(j=b;j>=0;j--)
	{
		scanf("%d",a[j]);
	}
	return 0;
}*/
