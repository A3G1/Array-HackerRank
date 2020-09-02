#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the migratoryBirds function below.
int migratoryBirds(int n, vector<int> ar) {
    int max = ar[0], val = 0;
    
    for(int j=1; j<6; j++)
    {
        int c = 0;
        for(int i=0; i<ar.size(); i++)
        {
            if(ar[i]==j)
            {
               c++;
            }
        }
        if(max<c)
        {
            max = c;
            val = j;
        }
    }
return val;
}

int main()
{

    int ar_count;
    cin >> ar_count;
    
    vector<int> ar(ar_count);

    for (int ar_itr = 0; ar_itr < ar_count; ar_itr++) {
        int ar_item;
        cin>>ar_item;
        ar[ar_itr] = ar_item;
    }

    int result = migratoryBirds(ar_count, ar);

    cout<<result;
}

