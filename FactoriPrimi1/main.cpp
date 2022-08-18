#include <iostream>

using namespace std;
long long x,nr=1,aux,i,j;
int main()
{   cin>>x;
    for(i=2;i*i<=x;i++){
        if(x%i==0)
            nr*=i;
        while(x%i==0)
            x/=i;
    }
    cout<<nr;
    return 0;
}
