#include <bits/stdc++.h>

using namespace std;
ifstream fin("nrsufix.in");
ofstream fout("nrsufix.out");
int main()
{   long long x,n,p=1,aux,ans;
    bool ok=false;
    fin>>x;
    aux=x;
    while(aux){
        aux/=10;
        p*=10;
    }
    while(fin>>n){
        if(n%p==x){
            ans=n;
            ok=true;
        }
    }
    if(ok)
        fout<<ans;
    else
        fout<<"nu exista";
    return 0;
}
