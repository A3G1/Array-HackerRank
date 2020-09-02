#include <cmath>
#include <iostream>
using namespace std;

int powersum(int X,int N,int num){
    if(pow(num,N)<X)
        return powersum(X,N,num+1)+powersum(X-pow(num,N),N,num+1);
    else if(pow(num,N)==X)
        return 1;
    else
        return 0;
}

int main() {
    int X,N;
    cin>>X>>N;
    cout<<powersum(X,N,1);
    return 0;
}
