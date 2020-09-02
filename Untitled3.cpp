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
	int d,m,count=0;
	cin>>d>>m;
	for(int i=0;i<m;i++)
	{
		for(int j=i+1;i<n;i++)
		{
			if(s[i]+s[j]==d)
			{
				count++;
			}
		}
	}
	cout<<count;
}
