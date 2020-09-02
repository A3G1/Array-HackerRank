#include<iostream>
using namespace std;
int main()
{
	int q;
	cin>>q;
	int x,y,z;
	int v1,v2;
	for(int i=0;i<q;i++)
	{
		cin>>x>>y>>z;
		int a = x - z;
		int b = y - z;
		if(a<0)
		{
			a = -a;
		}
		if(b<0)
		{
			b = -b;
		}
		if(a<b)
		{
			cout<<"Cat A";
		}
		else if(a>b)
		{
			cout<<"Cat B";
		}
		else if(a==b)
		{
			cout<<"Mouse C";
		}
	}
	return 0;
	
}
