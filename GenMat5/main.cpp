#include <iostream>

using namespace std;

int main()
{
    long long n,i=0,v[10],j,l;
    cin>>n;
    while(n){
        i++;
        v[i]=n%10;
        n/=10;
    }
    for(j=1;j<=i;j++){
        for(l=1;l<=i;l++)
            cout<<v[l]<<" ";
        cout<<'\n';
    }
    return 0;
}
