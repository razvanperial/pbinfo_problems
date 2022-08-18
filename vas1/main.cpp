#include <bits/stdc++.h>

using namespace std;

int main()
{  float x;
    long long t,y,i,k=0;
    cin>>x>>t>>y>>i;
    while(x>y)
    {
        x-=x/i;
        k+=t;
    }
    cout<<k;
    return 0;
}
