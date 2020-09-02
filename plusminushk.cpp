#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[10000];
	double remp=0,remn=0,remz=0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
        
		if(arr[i]>0)
		{
			remp+=1;
		}
		else if(arr[i]<0)
		{
			remn+=1;
		}
		else if(arr[i]==0)
		{
			remz+=1;
		}
	}
	
	cout<<remp/n<<endl;
	cout<<remn/n<<endl;
	cout<<remz/n;
	
}
