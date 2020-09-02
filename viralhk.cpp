#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int floor=5;
	int sum=0;
	for(int i=0;i<n;i++)
	{
		floor=floor/2;
		sum=sum+floor;
		floor=floor*3;
		
	}
	cout<<sum;
}
