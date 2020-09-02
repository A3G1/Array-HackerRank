#include<iostream>
using namespace std;
int main()
{
	int n,i,o;
	cin>>n;
	int grade[100];
	for(i=0;i<n;i++)
	{
		cin>>grade[i];
	}
	for(i=0;i<n;i++)
	{
		o=grade[i]/5;
		int temp;
		temp=5*(o+1);
		if(temp-grade[i]<3)
		{
			grade[i]=temp;
		}
	}	
	for(i=0;i<n;i++)
	{
		cout<<grade[i]<<endl;
	}
}
