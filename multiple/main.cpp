#include <bits/stdc++.h>

using namespace std;
ifstream fin("multiple.in");
ofstream fout("multiple.out");
long long t,n,k,r,val;
int main()
{
    fin>>t;
    while(t--){
        fin>>n>>k;
        if(k>n){
            fout<<k<<'\n';
        }
        else if(k==n){
            fout<<k*2<<'\n';
        }
        else if (n%k == 0){
            fout<<n + k<<'\n';
        }
        else{
            r = n%k;
            val = k - r;
            fout<<n+val<<'\n';
        }
    }
    return 0;
}
