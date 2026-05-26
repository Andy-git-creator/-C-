#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,f[50];
	cin>>n;
	f[1]=1;
	f[2]=1;
	f[3]=2;
	for(int i=4;i<50;i++)
	{
		f[i]=f[i-1]+f[i-2];
	}
	cout<<f[n]<<".00";
	return 0;
}
