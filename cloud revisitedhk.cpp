#include<iostream>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int c[n];
	int e=100;
	int e1,e2;
	for(int i=0;i<n;i++)
	{
		cin>>c[i];
	}
	int i = 0;
	while(i<n)
   {
		if(c[i]==0)
		{
		 e=e-1;	
		}
		if(c[i]==1)
		{
			e=e-1-2;
		}
	i = i+k;
	}
	cout<<e;
}
