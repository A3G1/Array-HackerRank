#include<iostream>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	long int c[1000000];
	int sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>c[i];
	}
	for(int i=0;i<n;i++)
	{
		if(n==k)
		{
			sum=sum+c[i];
		}

	}
	cout<<sum;
}
