#include <bits/stdc++.h>

using namespace std;
ifstream fin("puteri6.in");
ofstream fout("puteri6.out");
int v[10],n,x,p,l=0,i;
int main()
{   fin>>n;
    while(fin>>x){
        p=0;
        while(x/pow(10,p)>1){
            p++;
        }
        v[p]++;
        l++;
    }
    if(l<n){
        fout<<"Nu exista";
    }
    else
    {
        i=0;
        while(n){
            if(n-v[i]>0)
                n-=v[i];
            else{
                fout<<pow(10,i);
                n=0;
            }
        i++;
        }
    }
    return 0;
}
