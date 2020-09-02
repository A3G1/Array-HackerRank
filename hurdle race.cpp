#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int height[100];
	int temp=0;
    int max=0;
	int k;
	cin>>k;
	for(int i=0;i<n;i++)
	{
		cin>>height[i];
	}
	for(int i=0;i<n;i++)
	{
        if(max<height[i])
        {
            max=height[i];
        }
		if(max>k)
		{
			
			temp=max-k;
			
			
		}
	
        
		
	}
	cout<<temp<<endl;
	return 0;
}
