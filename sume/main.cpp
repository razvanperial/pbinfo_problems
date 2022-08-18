#include <bits/stdc++.h>

using namespace std;
ifstream in("sume.in");
ofstream out("sume.out");
int v[105];
int main()
{   int n,x,s=0,i;
    in>>n;
    for(i=1;i<=n;i++)
    {
        in>>x;
        s+=x;
        v[i]=s;
    }
    for(i=n;i>=1;i--)
        out<<v[i]<<'\n';
    return 0;
}
