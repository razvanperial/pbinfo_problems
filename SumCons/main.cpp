#include <bits/stdc++.h>

using namespace std;
int n,i,x;
int main()
{
    cin>>n;
    x=2;
    while(x*(x+1)/2<=n){
        if(x%2){
            if(n%x == 0){
                for(i=n/x-x/2; i<=n/x+x/2; i++)
                    cout<<i<<" ";
                cout<<'\n';
            }
        }
        else{
            if((x/2)*((n/x-x/2+1) + (n/x+x/2)) == n){
                for(i = n/x-x/2+1; i <= n/x+x/2; i++)
                    cout<<i<<" ";
                cout<<'\n';
            }
        }
        x++;
    }
    return 0;
}
