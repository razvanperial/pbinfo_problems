#include <bits/stdc++.h>

using namespace std;
ifstream in("zone.in");
ofstream out("zone.out");
int v[305];
int main()
{   int n,x,ok1=0,ok2=0,j1,j2,aux,i;
    in>>n;
    for(i=1;i<=3*n;i++){
        in>>v[i];
        if(i<=n){
            if(v[i]%2==0 && ok1==0){
                ok1=1;
                j1=i;
            }
        }
        if(i>=2*n){
            if(v[i]%2==1){
                ok2=1;
                j2=i;
            }
        }
    }
    if(ok1 && ok2){
        aux=v[j1];
        v[j1]=v[j2];
        v[j2]=aux;
    }
    for(i=1;i<=n*3;i++)
        out<<v[i]<<" ";
    return 0;
}
