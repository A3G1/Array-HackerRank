#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int X;
	int N;
	cin>>X>>N;
	int num=1;
	int factor;
	while(num>=1)
	{
	
	if((X%pow(num,N)==0))
	{
		factor=pow(num,N);
	
	}
	
	num++;
}
cout<<factor;
}
