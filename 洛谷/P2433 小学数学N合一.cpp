#include<stdio.h>
#include<math.h>
#define PI 3.141593
int main() 
{
	int T;
	scanf("%d",&T);
	switch(T)
	{
		case 1:
			printf("I love Luogu!");break;
		case 2:
			printf("6 4");break;
		case 3:
			int a,b,c;
			a=14/4;
			b=a*4;
			c=14-b;
			printf("%d\n%d\n%d",a,b,c);break;
		case 4:
			float d;
			d=500.0/3;
			printf("%.6g",d);break;
		case 5:
			int z;
			z=(260+220)/(12+20);
			printf("%d",z);break;
		case 6:
			double f;
			f=((double)sqrt(6*6+9*9));
		printf("%.6g",f);break; 
		case 7:
			int g,h,j;
			j=0;
			g=100+10;
			h=g-20;
			printf("%d\n%d\n%d",g,h,j);break;
		case 8:
			float k,l,m;
			int r;
			r=5;
			k=2*PI*r;
			l=PI*r*r;
			m=4.0/3*PI*r*r*r;
			printf("%.6g\n%.6g\n%.6g",k,l,m);break;
		case 9:
			int n,i;
			n=1;i=1;
			while(i<=3)
			{
				n=(n+1)*2;
				i++;
			}
			printf("%d",n);break;
		case 10:
			printf("9");break; //没想好过程怎么写 ('-')
		case 11:
			printf("33.3333");break;
		case 12:
			char p,q,y,s;
			p=65;
			q='M';
			y=q-p+1;
			s=p+17;
			printf("%d\n",y);
			printf("%c",s);break;
		case 13:
			int t,r1,r2;
			t=1;
			float v;
			r1=4;r2=10;
			v=4.0/3*r1*r1*r1*PI+4.0/3*r2*r2*r2*PI;
			while(t*t*t<=v)
				t++;
			printf("%d",t-1);break;
		case 14:
			printf("50");break;
	}
	return 0;
}
