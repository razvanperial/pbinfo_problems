#include <bits/stdc++.h>
using namespace std;
ifstream fin("seism.in");
ofstream fout("seism.out");
int v[100005];
int main()
{
    long long c,n;
    fin>>c>>n;
    if(c==1)
    {
        long long i,ir=0,d,dmax=0;
        fin>>v[1];
        for(i=1; i<=n; i++)
        {
            if(v[i])
            {
                ir=i;
                d=0;
                while(v[i])
                {
                    d++;
                    i++;
                    fin>>v[i];
                }
            }
            i++;
            fin>>v[i];
            if(i>2 && ir>2)
                if(!v[ir-1] && !v[ir-2] && !v[i-1] && !v[i])
                {
                    if(d>dmax)
                    {
                        dmax=d;
                    }
                }
            i--;
        }
        fout<<dmax;
    }
    else if(c==2)
    {
        long long i,ir=0,k=0;
        for(i=1; i<=n; i++)
            fin>>v[i];
        for(i=1; i<=n; i++)
        {
            if(v[i])
            {
                ir=i;
                while(v[i])
                {
                    i++;
                }
                if(ir>2 && !v[ir-2] && !v[ir-1] && !v[i+1])
                {
                    k++;
                    cout<<i<<" ";
                }
            }

        }
        fout<<k;
    }
    return 0;
}
