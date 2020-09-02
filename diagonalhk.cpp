#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[101][101];
	int i,j,k;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cin>>a[i][j];
		}
	}

	int sum1=0,sum2=0,sum=0;
	k=n;
	for(i=1;i<=n;i++)
	{
	
			sum1+=a[i][i];
			sum2+=a[i][k];
			k--;
			if(sum1>sum2)
			sum=sum1-sum2;
			
			else if(sum2>sum1)
			sum=sum2-sum1;
		
	}
	cout<<sum;
}
