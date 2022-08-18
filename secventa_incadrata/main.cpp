#include <bits/stdc++.h>

using namespace std;
ifstream fin("secventaincadrata.in");
ofstream fout("secventaincadrata.out");
int n;
int v[9], p[9],l,lmax=0,i=1,a[100000],la,x;
int main()
{   while(fin>>x){
        if(!v[x]){
            v[x]++;
            p[x]=i;
        }
        else{
            l = i - p[x] + 1;
            if(l>lmax)
            {
                lmax=l;
                la=1;
                a[1] = x;
            }
            else if(l == lmax){
                la++;
                a[la]=x;
            }
        }
        i++;
    }
    sort(a+1,a+la+1);
    fout<<lmax<<'\n';
    for(i=1;i<=la;i++)
        fout<<a[i]<<" ";
    return 0;
}
