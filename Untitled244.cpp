#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int s[100];
	int count=0;
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
	}
	int d,m;
	cin>>d>>m;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n-m;j++)
		{
			if(s[i]+s[j]==d)
			{
				count=count+1;
			}
		}
	}
	cout<<count;
}
