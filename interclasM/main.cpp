#include <bits/stdc++.h>

using namespace std;
ifstream fin("interclasm.in");
ofstream fout("interclasm.out");
long long  n,m,x,maxi=0,v[1000005],f1,f2,f=1,i;
int main()
{
    fin>>n;
    for(i = 1; i <= n; i++){
        fin>>x;
        if(x%5==0){
            v[x]++;
            maxi=max(maxi,x);
        }
    }
    fin>>m;
    for(i=1;i<=m;i++){
        fin>>x;
        if(x%5==0){
            v[x]++;
            maxi=max(maxi,x);
        }
    }
    for(i=5;i<=maxi;i+=5){
        if(v[i]==1)
            fout<<i<<" ";
    }
    return 0;
}
