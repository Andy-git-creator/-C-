#include<stdio.h>

int r(int n) 
{
	if((n%4==0&&n%100!=0)||n%400==0)
		return 1;
	else
		return 0;
}

int main()
{
	int r(int),y,m;
	scanf("%d%d",&y,&m);
	switch(m){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12: printf("31");break;
		case 4:
		case 6:
		case 9:
		case 11: printf("30");break;
		case 2:{
			if(r(y)==1)
				printf("29");
			else
				printf("28");
			break;
		}
	}
	return 0;
}
