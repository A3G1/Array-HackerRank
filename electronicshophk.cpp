#include<iostream>
using namespace std;
main()
{
	int b,n,m;
	cin>>b>>n>>m;
	int k[1000000],u[1000000];
	int temp=0;
	for(int i=0;i<n;i++)
	{
		cin>>k[i];
	}
	for(int i=0;i<m;i++)
	{
		cin>>u[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
		if((k[i]+u[j])<=b)
		{
			if((k[i]+u[j])>temp)
			{
				temp=k[i]+u[j];
			}
		}
	
	}
}
if(temp==0)
{
	return -1;
}
else
	cout<<;
	return 0;
}
