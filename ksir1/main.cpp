#include <bits/stdc++.h>

using namespace std;
ifstream fin("ksir.in");
ofstream fout("ksir.out");
long long k,aux,n,nr,r;
int main()
{
    fin>>k;
    aux = k;
    while(int(sqrt(aux)) != sqrt(aux))
        aux--;
    nr = sqrt(aux);
    r=k-aux;
    if(aux!=k){
        nr++;
        if(r < nr)
            fout<<r;
        else
            fout<<nr;
    }
    else
        fout<<nr;
    return 0;
}
