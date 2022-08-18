#include <bits/stdc++.h>

using namespace std;
ifstream fin("sir15.in");
ofstream fout("sir15.out");
long long k,x,a,b,s=0,i,c,aux,p=1;
int main()
{
    fin>>k>>x>>a>>b;
    for(i=1;i<=k;i++)
        s+=i*(i+1)/2;
    fout<<s%10<<'\n';
    aux=x;
    k=0;
    while(aux){
        c++;
        aux/=10;
    }
    if(x%10==c-1)
        for(i=1;i<=c+1;i++)
            fout<<i;
    else{
        while(c>1){
            p*=10;
            c--;
        }
        cout<<p;
        fout<<x%p*10+x/p;
    }
    fout<<'\n';
    if(b>a)
        fout<<b-a;
    else
        fout<<0;

    return 0;
}
