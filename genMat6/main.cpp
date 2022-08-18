#include <iostream>

using namespace std;

int main()
{
    long long n,i=0,v[10],j,l,k=1;
    cin>>n;
    while(n){
        i++;
        v[i]=n%10;
        n/=10;
    }
    for(j=1;j<=6;j++){
        for(l=1;l<=6;l++)
            if(j==l)
            	cout<<0<<" ";
            else{
        		cout<<v[min(j,l)]<<" ";
        	}
        cout<<'\n';
    }
    return 0;
}
