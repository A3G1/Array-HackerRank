#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int c[100];
	int count=0;
	for(int i=0;i<n;i++)
	{
		cin>>c[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(c[i]==c[j] && c[i]!=0 && c[j]!=0)
			{
				count++;
				c[i]=0;
				c[j]=0;
			}
		}
	}
	cout<<count;
}
