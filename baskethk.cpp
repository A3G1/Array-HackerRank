#include<iostream>
using namespace std;
int main ()
{
	int n;
	cin>>n;
	int max=0,min=0;
	int max_count=0;
	int min_count=0;
	int score[10000000];
	for(int i=0;i<n;i++)
	{
		cin>>score[i];
	}
	for(int i=0;i<n;i++)
	{
		if(max<score[i])
		{
			max=score[i];
			max_count++;
		}
		if(min>score[i])
		{
			min=score[i];
			min_count++;
		}
	}
	cout<<max_count<<" "<<min_count;
}
