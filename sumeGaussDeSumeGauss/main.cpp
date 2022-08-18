#include <bits/stdc++.h>

using namespace std;
unsigned long long n,x,s,p,i;
int main()
{
    cin>>n;
    for(i=1; i<=n; i++){
        cin>>x;
        cout<<x*(x+1)*(x+2)/6<<" ";
    }
    return 0;
}
