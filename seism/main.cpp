#include <bits/stdc++.h>
using namespace std;
ifstream in("seism.in");
ofstream out("seism.out");
int v[100005];
int main()
{   long long c,n;
    in>>c>>n;
    out<<c;
    if(c==1)
    {
        long long i,ir,d,dmax=0;
        for(i=1;i<=n;i++)
        {
            in>>v[i];
            if(v[i]){
                ir=i;
                d=0;
                while(v[i]){
                    d++;
                    i++;
                    in>>v[i];
                }
            }
            if(!v[ir-1] && !v[ir-2] && !v[i+1] && i<n)
                if(d>dmax)
                    dmax=d;
        }
        out<<dmax;
    }
    return 0;
}
