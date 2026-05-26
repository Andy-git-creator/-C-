#include<stdio.h>
int main()
{
	double score(int,int a[]);
	double b[101];              //b为每位选手成绩 
	int n,m;					//n名同学 m名评委
	int f[30];					//f为每位评委的打分 
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		b[i]=score(m,f);
	}
	for(int i=1;i<n;i++) {
		for(int j=1;j<n-i;j++) {
			if(b[j]<b[j+1]) {
				int t=0;
				t=b[j];
				b[j]=b[j+1];
				b[j+1]=t;
			}
		}
	}
	printf("%.2f",b[1]);
	return 0;
}

double score(int n,int a[])    //别管m,n是什么 ,n就是 m 
{
	double m;
	for(int p=1;p<=n;p++){
			scanf("%d",&a[p]);
		}
	for(int i=1;i<n;i++) {
		for(int j=1;j<=n-i;j++) {
			if(a[j]>a[j+1]) {
				int t=0;
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	double z=0.0;
	if(n==3)
		m=(double)a[2];
	else{
		for(int y=2;y<=n-1;y++){
			z=z+(double)a[y];
		}
		m=z/(n-2);
	}
	for(int i=1;i<=n;i++){
		a[i]=0;
	}
	return m;
} 


/*int main()
{
	int n,m,b[101];
	float score(int x[],int n,int k);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			scanf("%d",&a[i][j]);  //每个评委打分 
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			b[j]=a[i][j];
		}
		s[i]=score(b,n,m);
	}
	for(int i=1;i<=n;i++) 
	{
		for(int j=1;j<=n-i;j++) 
		{
			float c;
			if(s[j]<s[j+1]) 
			{
				c=s[j];
				s[j]=s[j+1];
				s[j+1]=c;
			}
		}
	}
	printf("%.2f",s[1]);
	return 0;
}
*/
/*float score(int x[],int n,int k)
{
	float a;
	for(int i=1;i<n;i++) 
	{
		for(int j=1;j<n-i;j++) 
		{
			if(x[j]>x[j+1]) 
			{
				int y;
				y=x[j];
				x[j]=x[j+1];
				x[j+1]=y;
			}
		}
	}
	float z=0;
	for(int y=2;y<=n-1;y++)
	{
		z=z+x[y];
	}
	a=z/(k-2);
	return a;
}
*/
