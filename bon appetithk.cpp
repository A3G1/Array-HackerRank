#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int bill[10000];
    int sum=0;
    int b,b_ac,b_ch,c;
    for(int i=0;i<n;i++)
    {
        cin>>bill[i];
        sum+=bill[i];
    }
    b=(sum-bill[k]);
    cin>>b_ch;
    b_ac=b/2;
        if(b_ch>b_ac)
            {
                c=b_ch-b_ac;
            cout<<c;
            }
    if(b_ch==b_ac)
    {
        cout<<"Bon Appetit";
    }
    
    }

