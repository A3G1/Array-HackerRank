#include<iostream>
using namespace std;
int main()
{
	long int arr[100000000];
	long int max=0,min=0;
	long int sum=0;
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<5;i++)
	{
		sum=sum+arr[i];
		if(min>arr[i])
		{
			min=arr[i];
		}
		else if(max<arr[i])
		{
			max=arr[i];
		}
	}
	cout<<sum-max<<" "<<sum+min<<endl;
}
