#include <bits/stdc++.h>

using namespace std;
long long n,x,s=0,r,nr;
int main()
{
    cin>>n;
    while(n--)
    {
        cin>>x>>r;
            if(r==x*(x+3)+1)
                s++;
    }
    cout<<s;
    return 0;
}
