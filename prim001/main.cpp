#include <iostream>

using namespace std;
long long n,aux,i,j,p=0;
int main()
{   cin>>n;
    long long aux=n,nrd=1;
    for(i=2;i*i<=n && n;i++){
        if(n%i==0){
            while(n%i==0){
                n/=i;
                p++;
            }
            nrd*=((p*aux)+1)%59999;
        }
    }
    if(n>1){
        nrd*=(aux+1)%59999;
    }
    cout<<nrd;
    return 0;
}
