#include<iostream>
using namespace std;
int main()
{
	int y;
	cin>>y;
	int dd,mm,yyyy;
	int feb;
	int sum_l=31+30+31+31+30+31+31;
	int temp=256; //day of the programmer;
	
	if(1700<=y && y<=1917)
	{
		if(y%4==0)
		{
			feb=29;
			sum_l=sum_l+feb;
			dd=temp-sum_l;
			
	    }
		else
		{
			feb=28;
			sum_l=sum_l+feb;
			dd=temp-sum_l;
			
		}
		cout<<dd<<"."<<"09"<<"."<<y<<endl;
	}
	
	if(1919<=y && y<=2700)
	{
	
	
		if(y%400==0 )
		{
			feb=29;
			sum_l+=feb;
			dd=temp-sum_l;
			
		}
		else if(y%4==0 && y%100!=0)
		{
			feb=29;
			sum_l+=feb;
			dd=temp-sum_l;
			
		}
		else
		{
			feb=28;
			sum_l+=feb;
			dd=temp-sum_l;
		}
		cout<<dd<<"."<<"09"<<"."<<y;
	}
		if(y==1918)
	{
		dd=26;
		cout<<dd<<"."<<"09"<<"."<<y;
	}
	
	
	
}
