#include<iostream>
using namespace std;
class sam
{
	private:
	int s,t,a,b,m,n,ac=0,oc=0;
	int d[100];
	public:
	int input()
	{
		cin>>s>>t;
		cin>>a>>b;
		cin>>m>>n;
	}
	int distance()
	{
		for(int i=0;i<m;i++)
		{
			cin>>d[i];
		}
		for(int i=0;i<n;i++)
		{
			cin>>d[i];
		}
	}
	int countApplesandOranges()
	{
		for(int i=0;i<m;i++)
		{
			if(a+d[i]>=s && a+d[i]<=t)
			{
				ac++;
		
			}
		}
		for(int i=0;i<n;i++)
		{
			if(b+d[i]>=s && b+d[i]<=t)
			{
			    oc++;
			
			}
			
		}
		cout<<ac++<<endl;
		cout<<oc++;
	}
	
	
};
int main()
{
	sam z;
	z.input();
	z.distance();
	z.countApplesandOranges();
	return 0;
}
