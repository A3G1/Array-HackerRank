#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int s[100];
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
	}
	int d,m,count=0,sum=0;
	cin>>d>>m;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;i<n;i++)
		{
			for(int k=0;k<m;k++)
			{
			  sum=sum+s[k];
		}
		if(sum==d)
		{
			count=count+1;
		}
	}
}
	cout<<count;
}
