#include <bits/stdc++.h>

using namespace std;

string kangaroo(int x1, int v1, int x2, int v2) {
    
    bool x;
    while(x1 <= 10000 || x2 <= 10000)
    {
        if(x1==x2)
        {
            x=1;
            break;
        }
        else
        {
        	x=0;
		}
            
            
        x1=x1+v1;
        x2=x2+v2;  
    }
    
if(x1 > 10000 && x2 > 10000)
{
   return "YES";
}
    
    if(x==true)
    {
        return "YES";
    }
    else
    {
        return "NO";
    }
        
    
    }

int main() {
    int x1;
    int v1;
    int x2;
    int v2;
    cin >> x1 >> v1 >> x2 >> v2;
    string result = kangaroo(x1, v1, x2, v2);
    cout << result << endl;
    return 0;
}
