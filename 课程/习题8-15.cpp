#include<stdio.h>
int a[6],b[6],c[6],d[6];//四个学生五门课程

float average(int x[])
{
	float sum;
	for(int i=1;i<=5;i++)
	{
		sum=sum+x[i];
	}
	return(sum/5);
}

int jige(int x[])
{
	int m=0;
	for(int i=1;i<=5;i++)
	{
		if(x[i]<60)
			m++;
	}
	if(m>2)
		return 1;
	else
		return 0;
}

void perfect(int x[],float y[])
{
	for(int i=1;i<=4;i++)
	{
		if(x[i]>85&&y[i]>90)
			printf("%d",i);
	}
}

int main()
{
	int s[5];
	float av[5];  //总分,平均分 
	float average(int[]);
	int jige(int[]);
	void perfect(int[],float[]);
	float (*p1)(int[]);
	int (*p2)(int[]);
	void (*p3)(int[],float[]);
	printf("输入成绩\n");
	printf("1号\n");
	scanf("%d%d%d%d%d",&a[1],&a[2],&a[3],&a[4],&a[5]);
	printf("2号\n");
	scanf("%d%d%d%d%d",&b[1],&b[2],&b[3],&b[4],&b[5]);
	printf("3号\n");
	scanf("%d%d%d%d%d",&c[1],&c[2],&c[3],&c[4],&c[5]);
	printf("4号\n");
	scanf("%d%d%d%d%d",&d[1],&d[2],&d[3],&d[4],&d[5]);
	s[1]=a[1]+a[2]+a[3]+a[4]+a[5];
	s[2]=b[1]+b[2]+b[3]+b[4]+b[5];
	s[3]=c[1]+c[2]+c[3]+c[4]+c[5];
	s[4]=d[1]+d[2]+d[3]+d[4]+d[5];
	
	p1=average;
	av[1]=(*p1)(a);av[2]=(*p1)(b);av[3]=(*p1)(c);av[4]=(*p1)(d);
	printf("平均分%f %f %f %f\n",av[1],av[2],av[3],av[4]);
	
	p2=jige;
	int e[5];  //四名同学及格情况 
	e[1]=(*p2)(a);e[2]=(*p2)(b);e[3]=(*p2)(c);e[4]=(*p2)(d);
	for(int i=1;i<=4;i++)
	{
		if(e[i])
			printf("成绩较差学生%d号%d分平均分%.2f\n",i,s[i],av[i]);
	}
	
	p3=perfect;
	printf("优秀学生学号:");
	(*p3)(s,av);
	
	return 0;
}
