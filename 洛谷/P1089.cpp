#include<stdio.h>
int main()
{
    int a[12],i,m=0,n=0;
    for(int i=0;i<=11;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<=11;i++)
    {
        m=((n+300-a[i])/100)*100+m;
        n=(n+300-a[i])-(n+300-a[i])/100*100;
        if(n<0)
        {
            scanf("-%d",i+1);
            return 0;
        }
    }
    scanf("%d",m*1.2+n);
    return 0;
}
