#include<iostream>
using namespace std;
int main()
{
	int hh,mm,ss;
	char s[2];
	cin>>hh>>mm>>ss>>s[0]>>s[1];
//	cout<<hh<<":"<<mm<<":"<<ss<<" "<<s[0]<<s[1];
	if((s[0]=='P' || s[0]=='p') && (s[1]=='M' || s[1]=='m') )
	{
		hh=hh+12;
		cout<<hh<<":0"<<mm<<":"<<ss<<s[2];
		
	}
	else if((s[0]=='A' || s[0]=='a') && (s[1]=='M' || s[1]=='m'))
	{
		cout<<"0"<<hh<<":0"<<mm<<":"<<ss;
	}

}
